// This file is generate with TZupdate.pl in espurna/code/html
// It uses the content of https://raw.githubusercontent.com/nayarsystems/posix_tz_db/master/zones.csv
// It work with TZ.js (also generated)

typedef struct { 
    char * timeZoneName;
    int16_t  timeZoneOffset;    // offset from GMT 0 in minutes 
    char * timeZoneDSTName;     // NULL if disable
    int16_t  timeZoneDSTOffset; // offset from GMT 0 in minutes 
    uint8_t dstStartMonth;      // start of Summer time if enabled  Month 1 - 12, 0 disabled dst
    uint8_t dstStartWeek;       // start of Summer time if enabled Week 1 - 5: (5 means last)
    uint8_t dstStartDay;        // start of Summer time if enabled Day 1- 7  (1- Sun)
    int16_t dstStartMin;       // start of Summer time if enabled in minutes
    uint8_t dstEndMonth;        // end of Summer time if enabled  Month 1 - 12
    uint8_t dstEndWeek;         // end of Summer time if enabled Week 1 - 5: (5 means last)
    uint8_t dstEndDay;          // end of Summer time if enabled Day 1-7  (1- Sun)
    int16_t dstEndMin;         // end of Summer time if enabled in minutes
} TZinfo;

    const TZinfo TZall[] PROGMEM = {
    {"GMT",0, NULL, 0, 0, 0, 0, 0, 0, 0}, // Africa/Abidjan = 0
    // Africa/Accra = 0
    {"EAT",180, NULL, 0, 0, 0, 0, 0, 0, 0}, // Africa/Addis_Ababa = 1
    {"CET",60, NULL, 0, 0, 0, 0, 0, 0, 0}, // Africa/Algiers = 2
    // Africa/Asmara = 1
    // Africa/Bamako = 0
    {"WAT",60, NULL, 0, 0, 0, 0, 0, 0, 0}, // Africa/Bangui = 3
    // Africa/Banjul = 0
    // Africa/Bissau = 0
    {"CAT",120, NULL, 0, 0, 0, 0, 0, 0, 0}, // Africa/Blantyre = 4
    // Africa/Brazzaville = 3
    // Africa/Bujumbura = 4
    {"EET",120, NULL, 0, 0, 0, 0, 0, 0, 0}, // Africa/Cairo = 5
    {"<+01>",60, NULL, 0, 0, 0, 0, 0, 0, 0}, // Africa/Casablanca = 6
    {"CET",60, "CEST", 120, 3, 5, 0, 120, 10, 5, 0, 180}, // Africa/Ceuta = 7
    // Africa/Conakry = 0
    // Africa/Dakar = 0
    // Africa/Dar_es_Salaam = 1
    // Africa/Djibouti = 1
    // Africa/Douala = 3
    // Africa/El_Aaiun = 6
    // Africa/Freetown = 0
    // Africa/Gaborone = 4
    // Africa/Harare = 4
    {"SAST",120, NULL, 0, 0, 0, 0, 0, 0, 0}, // Africa/Johannesburg = 8
    // Africa/Juba = 1
    // Africa/Kampala = 1
    // Africa/Khartoum = 4
    // Africa/Kigali = 4
    // Africa/Kinshasa = 3
    // Africa/Lagos = 3
    // Africa/Libreville = 3
    // Africa/Lome = 0
    // Africa/Luanda = 3
    // Africa/Lubumbashi = 4
    // Africa/Lusaka = 4
    // Africa/Malabo = 3
    // Africa/Maputo = 4
    // Africa/Maseru = 8
    // Africa/Mbabane = 8
    // Africa/Mogadishu = 1
    // Africa/Monrovia = 0
    // Africa/Nairobi = 1
    // Africa/Ndjamena = 3
    // Africa/Niamey = 3
    // Africa/Nouakchott = 0
    // Africa/Ouagadougou = 0
    // Africa/Porto-Novo = 3
    // Africa/Sao_Tome = 3
    // Africa/Tripoli = 5
    // Africa/Tunis = 2
    // Africa/Windhoek = 4
    {"HST",-600, "HDT", -540, 3, 2, 0, 120, 11, 1, 0, 120}, // America/Adak = 9
    {"AKST",-540, "AKDT", -480, 3, 2, 0, 120, 11, 1, 0, 120}, // America/Anchorage = 10
    {"AST",-240, NULL, 0, 0, 0, 0, 0, 0, 0}, // America/Anguilla = 11
    // America/Antigua = 11
    {"<-03>",-180, NULL, 0, 0, 0, 0, 0, 0, 0}, // America/Araguaina = 12
    // America/Argentina/Buenos_Aires = 12
    // America/Argentina/Catamarca = 12
    // America/Argentina/Cordoba = 12
    // America/Argentina/Jujuy = 12
    // America/Argentina/La_Rioja = 12
    // America/Argentina/Mendoza = 12
    // America/Argentina/Rio_Gallegos = 12
    // America/Argentina/Salta = 12
    // America/Argentina/San_Juan = 12
    // America/Argentina/San_Luis = 12
    // America/Argentina/Tucuman = 12
    // America/Argentina/Ushuaia = 12
    // America/Aruba = 11
    {"<-04>",-240, "<-03>", -180, 10, 1, 0, 0, 3, 4, 0, 0}, // America/Asuncion = 13
    {"EST",-300, NULL, 0, 0, 0, 0, 0, 0, 0}, // America/Atikokan = 14
    // America/Bahia = 12
    {"CST",-360, "CDT", -300, 4, 1, 0, 120, 10, 5, 0, 120}, // America/Bahia_Banderas = 15
    // America/Barbados = 11
    // America/Belem = 12
    {"CST",-360, NULL, 0, 0, 0, 0, 0, 0, 0}, // America/Belize = 16
    // America/Blanc-Sablon = 11
    {"<-04>",-240, NULL, 0, 0, 0, 0, 0, 0, 0}, // America/Boa_Vista = 17
    {"<-05>",-300, NULL, 0, 0, 0, 0, 0, 0, 0}, // America/Bogota = 18
    {"MST",-420, "MDT", -360, 3, 2, 0, 120, 11, 1, 0, 120}, // America/Boise = 19
    // America/Cambridge_Bay = 19
    {"<-04>",-240, "<-03>", -180, 11, 1, 0, 0, 2, 3, 0, 0}, // America/Campo_Grande = 20
    // America/Cancun = 14
    // America/Caracas = 17
    // America/Cayenne = 12
    // America/Cayman = 14
    {"CST",-360, "CDT", -300, 3, 2, 0, 120, 11, 1, 0, 120}, // America/Chicago = 21
    {"MST",-420, "MDT", -360, 4, 1, 0, 120, 10, 5, 0, 120}, // America/Chihuahua = 22
    // America/Costa_Rica = 16
    {"MST",-420, NULL, 0, 0, 0, 0, 0, 0, 0}, // America/Creston = 23
    // America/Cuiaba = 20
    // America/Curacao = 11
    // America/Danmarkshavn = 0
    {"PST",-480, "PDT", -420, 3, 2, 0, 120, 11, 1, 0, 120}, // America/Dawson = 24
    // America/Dawson_Creek = 23
    // America/Denver = 19
    {"EST",-300, "EDT", -240, 3, 2, 0, 120, 11, 1, 0, 120}, // America/Detroit = 25
    // America/Dominica = 11
    // America/Edmonton = 19
    // America/Eirunepe = 18
    // America/El_Salvador = 16
    // America/Fortaleza = 12
    // America/Fort_Nelson = 23
    {"AST",-240, "ADT", -180, 3, 2, 0, 120, 11, 1, 0, 120}, // America/Glace_Bay = 26
    {"<-03>",-180, "<-02>", -120, 3, 5, 0, 120, 10, 5, 0, -60}, // America/Godthab = 27
    // America/Goose_Bay = 26
    // America/Grand_Turk = 25
    // America/Grenada = 11
    // America/Guadeloupe = 11
    // America/Guatemala = 16
    // America/Guayaquil = 18
    // America/Guyana = 17
    // America/Halifax = 26
    {"CST",-300, "CDT", -240, 3, 2, 0, 0, 11, 1, 0, 60}, // America/Havana = 28
    // America/Hermosillo = 23
    // America/Indiana/Indianapolis = 25
    // America/Indiana/Knox = 21
    // America/Indiana/Marengo = 25
    // America/Indiana/Petersburg = 25
    // America/Indiana/Tell_City = 21
    // America/Indiana/Vevay = 25
    // America/Indiana/Vincennes = 25
    // America/Indiana/Winamac = 25
    // America/Inuvik = 19
    // America/Iqaluit = 25
    // America/Jamaica = 14
    // America/Juneau = 10
    // America/Kentucky/Louisville = 25
    // America/Kentucky/Monticello = 25
    // America/Kralendijk = 11
    // America/La_Paz = 17
    // America/Lima = 18
    // America/Los_Angeles = 24
    // America/Lower_Princes = 11
    // America/Maceio = 12
    // America/Managua = 16
    // America/Manaus = 17
    // America/Marigot = 11
    // America/Martinique = 11
    // America/Matamoros = 21
    // America/Mazatlan = 22
    // America/Menominee = 21
    // America/Merida = 15
    // America/Metlakatla = 10
    // America/Mexico_City = 15
    {"<-03>",-180, "<-02>", -120, 3, 2, 0, 120, 11, 1, 0, 120}, // America/Miquelon = 29
    // America/Moncton = 26
    // America/Monterrey = 15
    // America/Montevideo = 12
    // America/Montreal = 25
    // America/Montserrat = 11
    // America/Nassau = 25
    // America/New_York = 25
    // America/Nipigon = 25
    // America/Nome = 10
    {"<-02>",-120, NULL, 0, 0, 0, 0, 0, 0, 0}, // America/Noronha = 30
    // America/North_Dakota/Beulah = 21
    // America/North_Dakota/Center = 21
    // America/North_Dakota/New_Salem = 21
    // America/Ojinaga = 19
    // America/Panama = 14
    // America/Pangnirtung = 25
    // America/Paramaribo = 12
    // America/Phoenix = 23
    // America/Port-au-Prince = 25
    // America/Port_of_Spain = 11
    // America/Porto_Velho = 17
    // America/Puerto_Rico = 11
    // America/Punta_Arenas = 12
    // America/Rainy_River = 21
    // America/Rankin_Inlet = 21
    // America/Recife = 12
    // America/Regina = 16
    // America/Resolute = 21
    // America/Rio_Branco = 18
    // America/Santarem = 12
    {"<-04>",-240, "<-03>", -180, 9, 1, 6, 0, 4, 1, 6, 1440}, // America/Santiago = 31
    // America/Santo_Domingo = 11
    {"<-03>",-180, "<-02>", -120, 11, 1, 0, 0, 2, 3, 0, 0}, // America/Sao_Paulo = 32
    {"<-01>",-60, "<+00>", 0, 3, 5, 0, 0, 10, 5, 0, 60}, // America/Scoresbysund = 33
    // America/Sitka = 10
    // America/St_Barthelemy = 11
    {"NST",-180, "NDT", -120, 3, 2, 0, 120, 11, 1, 0, 120}, // America/St_Johns = 34
    // America/St_Kitts = 11
    // America/St_Lucia = 11
    // America/St_Thomas = 11
    // America/St_Vincent = 11
    // America/Swift_Current = 16
    // America/Tegucigalpa = 16
    // America/Thule = 26
    // America/Thunder_Bay = 25
    // America/Tijuana = 24
    // America/Toronto = 25
    // America/Tortola = 11
    // America/Vancouver = 24
    // America/Whitehorse = 24
    // America/Winnipeg = 21
    // America/Yakutat = 10
    // America/Yellowknife = 19
    {"<+08>",480, NULL, 0, 0, 0, 0, 0, 0, 0}, // Antarctica/Casey = 35
    {"<+07>",420, NULL, 0, 0, 0, 0, 0, 0, 0}, // Antarctica/Davis = 36
    {"<+10>",600, NULL, 0, 0, 0, 0, 0, 0, 0}, // Antarctica/DumontDUrville = 37
    {"<+11>",660, NULL, 0, 0, 0, 0, 0, 0, 0}, // Antarctica/Macquarie = 38
    {"<+05>",300, NULL, 0, 0, 0, 0, 0, 0, 0}, // Antarctica/Mawson = 39
    {"NZST",720, "NZDT", 780, 9, 5, 0, 120, 4, 1, 0, 180}, // Antarctica/McMurdo = 40
    // Antarctica/Palmer = 12
    // Antarctica/Rothera = 12
    {"<+03>",180, NULL, 0, 0, 0, 0, 0, 0, 0}, // Antarctica/Syowa = 41
    {"<+00>",2, "<+02>", -2, 3, 5, 0, 60, 10, 5, 0, 180}, // Antarctica/Troll = 42
    {"<+06>",360, NULL, 0, 0, 0, 0, 0, 0, 0}, // Antarctica/Vostok = 43
    // Arctic/Longyearbyen = 7
    // Asia/Aden = 41
    // Asia/Almaty = 43
    {"EET",120, "EEST", 180, 3, 5, 4, 0, 10, 5, 5, 60}, // Asia/Amman = 44
    {"<+12>",720, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Anadyr = 45
    // Asia/Aqtau = 39
    // Asia/Aqtobe = 39
    // Asia/Ashgabat = 39
    // Asia/Atyrau = 39
    // Asia/Baghdad = 41
    // Asia/Bahrain = 41
    {"<+04>",240, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Baku = 46
    // Asia/Bangkok = 36
    // Asia/Barnaul = 36
    {"EET",120, "EEST", 180, 3, 5, 0, 0, 10, 5, 0, 0}, // Asia/Beirut = 47
    // Asia/Bishkek = 43
    // Asia/Brunei = 35
    {"<+09>",540, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Chita = 48
    // Asia/Choibalsan = 35
    {"<+0530>",330, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Colombo = 49
    {"EET",120, "EEST", 180, 3, 5, 5, 0, 10, 5, 5, 0}, // Asia/Damascus = 50
    // Asia/Dhaka = 43
    // Asia/Dili = 48
    // Asia/Dubai = 46
    // Asia/Dushanbe = 39
    {"EET",120, "EEST", 180, 3, 5, 0, 180, 10, 5, 0, 240}, // Asia/Famagusta = 51
    {"EET",120, "EEST", 180, 3, 4, 6, 60, 10, 5, 6, 60}, // Asia/Gaza = 52
    // Asia/Hebron = 52
    // Asia/Ho_Chi_Minh = 36
    {"HKT",480, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Hong_Kong = 53
    // Asia/Hovd = 36
    // Asia/Irkutsk = 35
    {"WIB",420, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Jakarta = 54
    {"WIT",540, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Jayapura = 55
    {"IST",120, "IDT", 180, 3, 4, 4, 120, 10, 5, 0, 120}, // Asia/Jerusalem = 56
    {"<+0430>",270, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Kabul = 57
    // Asia/Kamchatka = 45
    {"PKT",300, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Karachi = 58
    {"<+0545>",345, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Kathmandu = 59
    // Asia/Khandyga = 48
    {"IST",330, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Kolkata = 60
    // Asia/Krasnoyarsk = 36
    // Asia/Kuala_Lumpur = 35
    // Asia/Kuching = 35
    // Asia/Kuwait = 41
    {"CST",480, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Macau = 61
    // Asia/Magadan = 38
    {"WITA",480, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Makassar = 62
    {"PST",480, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Manila = 63
    // Asia/Muscat = 46
    // Asia/Nicosia = 51
    // Asia/Novokuznetsk = 36
    // Asia/Novosibirsk = 36
    // Asia/Omsk = 43
    // Asia/Oral = 39
    // Asia/Phnom_Penh = 36
    // Asia/Pontianak = 54
    {"KST",540, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Pyongyang = 64
    // Asia/Qatar = 41
    // Asia/Qyzylorda = 43
    // Asia/Riyadh = 41
    // Asia/Sakhalin = 38
    // Asia/Samarkand = 39
    // Asia/Seoul = 64
    // Asia/Shanghai = 61
    // Asia/Singapore = 35
    // Asia/Srednekolymsk = 38
    // Asia/Taipei = 61
    // Asia/Tashkent = 39
    // Asia/Tbilisi = 46
    {"<+0330>",210, "<+0430>", 270, 80, 0, 7, 0, 200, 64, 7, 0}, // Asia/Tehran = 65
    // Asia/Thimphu = 43
    {"JST",540, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Tokyo = 66
    // Asia/Tomsk = 36
    // Asia/Ulaanbaatar = 35
    // Asia/Urumqi = 43
    // Asia/Ust-Nera = 37
    // Asia/Vientiane = 36
    // Asia/Vladivostok = 37
    // Asia/Yakutsk = 48
    {"<+0630>",390, NULL, 0, 0, 0, 0, 0, 0, 0}, // Asia/Yangon = 67
    // Asia/Yekaterinburg = 39
    // Asia/Yerevan = 46
    // Atlantic/Azores = 33
    // Atlantic/Bermuda = 26
    {"WET",0, "WEST", 60, 3, 5, 0, 60, 10, 5, 0, 120}, // Atlantic/Canary = 68
    {"<-01>",-60, NULL, 0, 0, 0, 0, 0, 0, 0}, // Atlantic/Cape_Verde = 69
    // Atlantic/Faroe = 68
    // Atlantic/Madeira = 68
    // Atlantic/Reykjavik = 0
    // Atlantic/South_Georgia = 30
    // Atlantic/Stanley = 12
    // Atlantic/St_Helena = 0
    {"ACST",570, "ACDT", 630, 10, 1, 0, 120, 4, 1, 0, 180}, // Australia/Adelaide = 70
    {"AEST",600, NULL, 0, 0, 0, 0, 0, 0, 0}, // Australia/Brisbane = 71
    // Australia/Broken_Hill = 70
    {"AEST",600, "AEDT", 660, 10, 1, 0, 120, 4, 1, 0, 180}, // Australia/Currie = 72
    {"ACST",570, NULL, 0, 0, 0, 0, 0, 0, 0}, // Australia/Darwin = 73
    {"<+0845>",525, NULL, 0, 0, 0, 0, 0, 0, 0}, // Australia/Eucla = 74
    // Australia/Hobart = 72
    // Australia/Lindeman = 71
    {"<+1030>",630, "<+11>", -11, 10, 1, 0, 120, 4, 1, 0, 120}, // Australia/Lord_Howe = 75
    // Australia/Melbourne = 72
    {"AWST",480, NULL, 0, 0, 0, 0, 0, 0, 0}, // Australia/Perth = 76
    // Australia/Sydney = 72
    // Europe/Amsterdam = 7
    // Europe/Andorra = 7
    // Europe/Astrakhan = 46
    // Europe/Athens = 51
    // Europe/Belgrade = 7
    // Europe/Berlin = 7
    // Europe/Bratislava = 7
    // Europe/Brussels = 7
    // Europe/Bucharest = 51
    // Europe/Budapest = 7
    // Europe/Busingen = 7
    {"EET",120, "EEST", 180, 3, 5, 0, 120, 10, 5, 0, 180}, // Europe/Chisinau = 77
    // Europe/Copenhagen = 7
    {"IST",60, "GMT", 120, 10, 5, 0, 120, 3, 5, 0, 60}, // Europe/Dublin = 78
    // Europe/Gibraltar = 7
    {"GMT",0, "BST", 60, 3, 5, 0, 60, 10, 5, 0, 120}, // Europe/Guernsey = 79
    // Europe/Helsinki = 51
    // Europe/Isle_of_Man = 79
    // Europe/Istanbul = 41
    // Europe/Jersey = 79
    // Europe/Kaliningrad = 5
    // Europe/Kiev = 51
    // Europe/Kirov = 41
    // Europe/Lisbon = 68
    // Europe/Ljubljana = 7
    // Europe/London = 79
    // Europe/Luxembourg = 7
    // Europe/Madrid = 7
    // Europe/Malta = 7
    // Europe/Mariehamn = 51
    // Europe/Minsk = 41
    // Europe/Monaco = 7
    {"MSK",180, NULL, 0, 0, 0, 0, 0, 0, 0}, // Europe/Moscow = 80
    // Europe/Oslo = 7
    // Europe/Paris = 7
    // Europe/Podgorica = 7
    // Europe/Prague = 7
    // Europe/Riga = 51
    // Europe/Rome = 7
    // Europe/Samara = 46
    // Europe/San_Marino = 7
    // Europe/Sarajevo = 7
    // Europe/Saratov = 46
    // Europe/Simferopol = 80
    // Europe/Skopje = 7
    // Europe/Sofia = 51
    // Europe/Stockholm = 7
    // Europe/Tallinn = 51
    // Europe/Tirane = 7
    // Europe/Ulyanovsk = 46
    // Europe/Uzhgorod = 51
    // Europe/Vaduz = 7
    // Europe/Vatican = 7
    // Europe/Vienna = 7
    // Europe/Vilnius = 51
    // Europe/Volgograd = 46
    // Europe/Warsaw = 7
    // Europe/Zagreb = 7
    // Europe/Zaporozhye = 51
    // Europe/Zurich = 7
    // Indian/Antananarivo = 1
    // Indian/Chagos = 43
    // Indian/Christmas = 36
    // Indian/Cocos = 67
    // Indian/Comoro = 1
    // Indian/Kerguelen = 39
    // Indian/Mahe = 46
    // Indian/Maldives = 39
    // Indian/Mauritius = 46
    // Indian/Mayotte = 1
    // Indian/Reunion = 46
    {"<+13>",780, "<+14>", 840, 9, 5, 0, 180, 4, 1, 0, 240}, // Pacific/Apia = 81
    // Pacific/Auckland = 40
    // Pacific/Bougainville = 38
    {"<+1245>",765, "<+1345>", 825, 9, 5, 0, 165, 4, 1, 0, 225}, // Pacific/Chatham = 82
    // Pacific/Chuuk = 37
    {"<-06>",-360, "<-05>", -300, 9, 1, 6, 1320, 4, 1, 6, 1320}, // Pacific/Easter = 83
    // Pacific/Efate = 38
    {"<+13>",780, NULL, 0, 0, 0, 0, 0, 0, 0}, // Pacific/Enderbury = 84
    // Pacific/Fakaofo = 84
    {"<+12>",720, "<+13>", 780, 11, 1, 0, 120, 1, 2, 2, 7380}, // Pacific/Fiji = 85
    // Pacific/Funafuti = 45
    {"<-06>",-360, NULL, 0, 0, 0, 0, 0, 0, 0}, // Pacific/Galapagos = 86
    {"<-09>",-540, NULL, 0, 0, 0, 0, 0, 0, 0}, // Pacific/Gambier = 87
    // Pacific/Guadalcanal = 38
    {"ST",600, NULL, 0, 0, 0, 0, 0, 0, 0}, // Pacific/Guam = 88
    {"HST",-600, NULL, 0, 0, 0, 0, 0, 0, 0}, // Pacific/Honolulu = 89
    {"<+14>",840, NULL, 0, 0, 0, 0, 0, 0, 0}, // Pacific/Kiritimati = 90
    // Pacific/Kosrae = 38
    // Pacific/Kwajalein = 45
    // Pacific/Majuro = 45
    {"<-0930>",-540, NULL, 0, 0, 0, 0, 0, 0, 0}, // Pacific/Marquesas = 91
    {"SST",-660, NULL, 0, 0, 0, 0, 0, 0, 0}, // Pacific/Midway = 92
    // Pacific/Nauru = 45
    {"<-11>",-660, NULL, 0, 0, 0, 0, 0, 0, 0}, // Pacific/Niue = 93
    // Pacific/Norfolk = 38
    // Pacific/Noumea = 38
    // Pacific/Pago_Pago = 92
    // Pacific/Palau = 48
    {"<-08>",-480, NULL, 0, 0, 0, 0, 0, 0, 0}, // Pacific/Pitcairn = 94
    // Pacific/Pohnpei = 38
    // Pacific/Port_Moresby = 37
    {"<-10>",-600, NULL, 0, 0, 0, 0, 0, 0, 0}, // Pacific/Rarotonga = 95
    // Pacific/Saipan = 88
    // Pacific/Tahiti = 95
    // Pacific/Tarawa = 45
    // Pacific/Tongatapu = 84
    // Pacific/Wake = 45
    // Pacific/Wallis = 45
    // Etc/GMT = 0
    // Etc/GMT-0 = 0
    // Etc/GMT-1 = 6
    {"<+02>",120, NULL, 0, 0, 0, 0, 0, 0, 0}, // Etc/GMT-2 = 96
    // Etc/GMT-3 = 41
    // Etc/GMT-4 = 46
    // Etc/GMT-5 = 39
    // Etc/GMT-6 = 43
    // Etc/GMT-7 = 36
    // Etc/GMT-8 = 35
    // Etc/GMT-9 = 48
    // Etc/GMT-10 = 37
    // Etc/GMT-11 = 38
    // Etc/GMT-12 = 45
    // Etc/GMT-13 = 84
    // Etc/GMT-14 = 90
    // Etc/GMT0 = 0
    // Etc/GMT+0 = 0
    // Etc/GMT+1 = 69
    // Etc/GMT+2 = 30
    // Etc/GMT+3 = 12
    // Etc/GMT+4 = 17
    // Etc/GMT+5 = 18
    // Etc/GMT+6 = 86
    {"<-07>",-420, NULL, 0, 0, 0, 0, 0, 0, 0}, // Etc/GMT+7 = 97
    // Etc/GMT+8 = 94
    // Etc/GMT+9 = 87
    // Etc/GMT+10 = 95
    // Etc/GMT+11 = 93
    {"<-12>",-720, NULL, 0, 0, 0, 0, 0, 0, 0}, // Etc/GMT+12 = 98
    {"UCT",0, NULL, 0, 0, 0, 0, 0, 0, 0}, // Etc/UCT = 99
    {"UTC",0, NULL, 0, 0, 0, 0, 0, 0, 0}// Etc/UTC = 100
    // Etc/Greenwich = 0
    // Etc/Universal = 100
    // Etc/Zulu = 100
    };
#define MAX_TIME_ZONE 100
