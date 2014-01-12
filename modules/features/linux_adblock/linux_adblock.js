var p = "http", d = "static";
if (document.location.protocol == "https:") {
    p += "s";
    d = "engine";
}
var z = document.createElement("script");
z.type = "text/javascript";
z.async = true;
z.src = p + "://" + d + ".adzerk.net/ados.js";
var s = document.getElementsByTagName("script")[0];
s.parentNode.insertBefore(z, s);

var ados_keywords = ados_keywords || [];
if (location.protocol == "https:") {
    ados_keywords.push("T:SSL");
} else {
    ados_keywords.push("T:HTTP");
}

var ados = ados || {};
ados.run = ados.run || [];
ados.run.push(function () {
    ados_add_placement(4669, 20981, "azk59340_tracking", 20).setZone(20876);
    ados_add_placement(4669, 20981, "azk85217_rectangle", 5).setZone(16024);
    ados_add_placement(4669, 20981, "azk98143_leaderboard", 4).setZone(16023);
    ados_load();
});