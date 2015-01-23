# RedHen Raiser

This distribution is for building social fundraising websites, such as those
around marathons and walks, where a fundraising campaign is made up of myriad
individual and team pages, customized by the individual participants, but
connected to the larger campaign.

As the name suggests, Raiser is built on top of the RedHen CRM project,
including the RedHen Donation and the RedHen Campaign modules.

RedHen Raiser was created by ThinkShout with the Capital Area Food Bank of DC
(http://www.capitalareafoodbank.org) for their social fundraising platform at
https://give.capitalareafoodbank.org.

# Getting Started
To get started with RedHen Raiser, you must use Drush Make to create an install
profile and download all the dependencies, then run the Drupal installer. After
that is done, you can create a page to act as your homepage and add a valid
payment method through Commerce to allow donations to be taken. You may wish to
customize the site name, logos, etc. This should be done by overriding the
built-in Raiser theme with your own, but you can hack the theme directly if you
don't mind recreating the changes if/when you upgrade.

Here are the steps for installing RedHen Raiser as a new site.
*your/web/root* is the directory you want to install RedHen Raiser to (the
Drupal root location). This method creates the directory, so it should not yet
exist.

Start in the same directory that this Readme sits in.

```
: drush make drupal-org-core.make *your/web/root*
: drush make --no-core --contrib-destination drupal-org.make .
: cp -R . *your/web/root*/profiles/redhen_raiser
: cd *your/web/root*
```

Now visit your website and run the installer. If you run it with Drush, specify
the "redhen_raiser" profile.

Create a "page" type node and set its path to "home" to add content to the
home page.

Add any content to the top level of the Main Menu to have it appear in the menu
at the bottom of the site.

Go to Content -> Blocks and edit the "Social Media Links" block to link to your
organization's social media pages.

To enable payment, go to:
store -> configuration -> payment methods
Add your payment method (or enable commerce_payment_example to test)


# Customization
If you'd like to develop on top of RedHen Raiser while retaining the ability to
apply Raiser updates, we have built out a skeleton installation to start from.
This installation is called "Charlotte" and can be found at:
https://github.com/thinkshout/charlotte

The build script in Charlotte will download raiser, and also create a repo
for you to work from in sites/all. You will want to create a fork of Charlotte
and push to your own repo.

Of specific note: creating a module called "redhen_raiser_custom_install" will
allow you to run installation functions and enable default modules when the
redhen_raiser installation profile runs.

[![Build Status](https://travis-ci.org/thinkshout/redhen_raiser.svg?branch=7.x-1.x)](https://travis-ci.org/thinkshout/redhen_raiser)
