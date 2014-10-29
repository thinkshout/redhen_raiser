Commerce Recurring Framework - Version 2
----------------------------------------

Dependencies:
- Drupal Commerce and its dependencies (Rules, Views, Entity API)
- Interval field (Latest -dev)
- Date

Recommended modules
- Commerce Card on File (Version 2).

Install
-------
Install this module and all its required dependencies as habitual.
Once it's installed, the following structure will be generated:

Structure
---------
The module provides a new product type for basic recurring usage. But virtually
any product type could be recurring.

Five fields are provided in the default product type.
    Initial price - Sets the initial price of the product, this might be used
      to do trial periods. (Commerce price).
    Initial period - Period or offset of after which the recurring price and
      period will be effective. (Interval field).
    Recurring price - Price used for recurring the product. (Commerce price).
    Recurring period - Periodicity to apply the recurring price. Interval field
    End period - Period after wich end the recurring. (Interval field)

A new Recurring entity is provided with these fields and properties.
    Id.
    User assigned to the recurring process.
    Bundle (Product / Order).
    Recurring reference - Entity reference field to the bundle (product/order).
    Status property.
    Price at the moment of creation.
    Start date (Created date). Date property.
    Due date. Calculation is based on start date + initial/recurring date.
    End date (optional), it might be empty or created date + expiration period,
      or a given timestamp on cancelling the recurring. Date property.
    Order reference (multiple), to all the orders associated with the recurring
      process, being 0 the initial one.

Recurring process
-----------------
When an order containing a Recurring product is purchased for the first time
for the current user, by default the module reacts on "Order is paid in full"
event, a Recurring entity will be created associated with that product for the
current order.

On a cron event, the recurring entities with past due dates are retrieved and
an order is created for each recurring entity associated with the recurring
product and customer.

Note: When this cron event runs it's the time to trigger the paymens or use
another technique to build a queue of payments.

All this process is driven through Rules so most of it is modifiable
How do I transform a "normal" product type into a recurring one

If a product has value on any of these fields, it will be considered as a
recurring product.

    commerce_recurring_ini_price
    commerce_recurring_rec_price
    commerce_recurring_ini_period
    commerce_recurring_rec_period
    commerce_recurring_end_period

Basic UI support through Entity API UI & Views
----------------------------------------------
There's a Commerce Recurring UI submodule providing basic administration and
user interface for the module, based in Views and Entity API so it's highly
customizable.
