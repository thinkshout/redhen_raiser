function raiserShare(shareUrl, url, winWidth, winHeight) {
  var winTop = (screen.height / 2) - (winHeight / 2);
  var winLeft = (screen.width / 2) - (winWidth / 2);
  window.open(shareUrl + url, 'sharer', 'top=' + winTop + ',left=' + winLeft + ',toolbar=0,status=0,location=0,width=' + winWidth + ',height=' + winHeight);
}
