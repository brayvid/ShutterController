// Particular parameters
const unsigned int shutterBaseMillis[] = {512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,513,513,513,513,513,513,513,513,513,513,513,513,513,513,513,513,513,513,513,513,513,513,513,513,513,513,513,513,513,514,514,514,514,514,514,514,514,514,514,514,514,514,514,514,514,514,514,514,514,514,515,515,515,515,515,515,515,515,515,515,515,515,515,515,515,515,516,516,516,516,516,516,516,516,516,516,516,516,516,516,517,517,517,517,517,517,517,517,517,517,517,518,518,518,518,518,518,518,518,518,518,519,519,519,519,519,519,519,519,519,520,520,520,520,520,520,520,521,521,521,521,521,521,521,521,522,522,522,522,522,522,523,523,523,523,523,523,524,524,524,524,524,525,525,525,525,525,525,526,526,526,526,527,527,527,527,527,528,528,528,528,529,529,529,529,530,530,530,530,531,531,531,531,532,532,532,533,533,533,534,534,534,534,535,535,535,536,536,536,537,537,538,538,538,539,539,539,540,540,541,541,541,542,542,543,543,544,544,545,545,545,546,546,547,547,548,548,549,549,550,551,551,552,552,553,553,554,555,555,556,556,557,558,558,559,560,560,561,562,562,563,564,564,565,566,567,568,568,569,570,571,572,572,573,574,575,576,577,578,579,580,581,582,583,584,585,586,587,588,589,590,591,592,593,595,596,597,598,599,601,602,603,604,606,607,609,610,611,613,614,616,617,619,620,622,623,625,627,628,630,632,634,635,637,639,641,643,645,647,649,651,653,655,657,659,661,663,666,668,670,673,675,677,680,682,685,688,690,693,696,699,701,704,707,710,713,716,719,723,726,729,733,736,739,743,747,750,754,758,762,766,770,774,778,782,787,791,795,800,805,809,814,819,824,829,835,840,845,851,857,862,868,874,880,887,893,899,906,913,920,927,934,941,949,957,965,973,981,989,998,1007,1016,1025,1034,1044,1054,1064,1074,1085,1096,1107,1118,1130,1142,1154,1167,1180,1193,1207,1221,1235,1250,1265,1281,1297,1314,1331,1348,1366,1385,1404,1423,1444,1465,1486,1509,1532,1556,1580,1606,1632,1659,1688,1717,1747,1779,1811,1845,1881,1917,1955,1995,2037,2080,2125,2172,2221,2272,2326,2383,2442,2504,2570,2639,2712,2788,2869,2955,3046,3143,3245,3355,3471,3596,3730,3873,4028,4195,4375,4571,4784,5017,5273,5554,5864,6209,6594,7025,7512,8065,8697,9426,10273,11267,12444,13853,15557,17640,20208,23391,27323,32098,37668,43709,49583,54569,58248,60653,62091,62904,63348,63586,63712,63778,63813,63831,63841,63846,63848,63850,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851,63851};
const unsigned int shutterAddlMicros[] = {74,90,107,124,142,159,177,195,213,232,250,269,289,308,328,348,368,389,409,430,452,473,495,518,540,563,586,609,633,657,681,706,731,756,782,808,834,861,888,916,943,972,0,29,58,88,118,148,179,210,242,274,307,340,373,407,441,476,511,547,583,619,657,694,732,771,810,849,890,930,972,13,56,98,142,186,230,276,321,368,415,463,511,560,609,659,710,762,814,867,921,975,30,86,143,200,258,317,376,437,498,560,623,686,751,816,883,950,18,87,157,227,299,372,445,520,596,672,750,829,908,989,71,154,238,323,409,497,585,675,766,858,952,47,143,240,338,438,539,642,746,851,958,66,175,286,399,513,628,746,864,984,106,230,355,482,610,740,872,6,142,279,418,559,702,847,994,142,293,446,601,758,917,78,241,407,575,745,917,91,268,448,629,814,0,190,381,576,773,972,175,380,587,798,11,228,447,669,895,123,354,589,826,67,312,559,810,64,322,583,848,116,388,664,943,227,514,805,100,399,702,9,321,636,956,281,610,943,281,623,971,323,679,41,408,779,156,538,926,318,716,120,529,943,364,790,222,660,105,555,12,474,944,420,902,391,887,390,900,417,942,473,12,559,113,675,245,823,409,3,606,217,836,465,102,748,404,69,743,427,120,823,537,260,994,738,493,259,35,823,622,433,255,89,935,793,664,547,443,352,274,210,159,122,99,91,97,117,153,204,270,352,450,564,695,842,6,188,388,605,840,94,367,658,970,301,652,23,415,829,263,720,199,700,225,773,345,940,561,207,878,575,298,49,826,632,466,329,221,143,96,80,95,142,223,336,484,666,884,138,428,756,122,526,971,455,981,549,159,813,511,255,45,883,768,703,688,724,812,954,150,402,710,77,502,989,537,148,823,565,374,252,201,221,315,485,731,57,463,952,525,185,933,773,705,732,857,82,409,841,381,31,794,674,672,793,39,414,922,565,348,274,348,573,954,494,200,75,125,354,769,373,174,177,389,815,464,341,454,810,419,287,424,839,541,540,846,471,425,721,370,387,784,576,778,406,476,7,17,524,550,116,246,962,292,261,898,235,302,134,768,242,597,877,129,402,750,230,904,836,97,763,916,643,40,208,260,315,505,971,869,369,655,931,421,368,46,752,819,616,555,93,747,96,791,572,279,868,436,245,749,641,894,823,164,163,703,462,112,598,484,433,849,743,918,593,605,354,561,581,978,411,247,487,810,751,873,962,279,93,911,704,452,114,79,471,361,667,264,293,928,309,32,410,609,713,767,796,811,818,823,825,826,826,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827,827};
const unsigned int betweenSec = 4;


// Don't edit
const unsigned int shutterPin = 7;
const unsigned int listLen = (sizeof(shutterBaseMillis) / sizeof(shutterBaseMillis[0]));
const unsigned int secInMS = 1000;
unsigned long startMillis;
unsigned long currentMillis;
unsigned long lastMillis;
unsigned long exposureCount = 0;

void setup() {
  pinMode(shutterPin, OUTPUT);
  digitalWrite(shutterPin, LOW);
  lastMillis = millis();
  delay(betweenSec * secInMS);
  // Ensure no microsecond value is less than 3
  for (int i = 0; i < listLen; i++){
    if (shutterAddlMicros[i] < 3){
      shutterAddlMicros[i] = 3;
    }
  }
}

void loop() {
  // Only start a new frame after pausing for specified time and stop after all frames are finished
  if (((millis() - lastMillis) >= (betweenSec * secInMS)) && (exposureCount <= (listLen - 1))) {
    digitalWrite(shutterPin, HIGH);
    delay(shutterBaseMillis[exposureCount]);
    delayMicroseconds(shutterAddlMicros[exposureCount]);
    digitalWrite(shutterPin, LOW);
    lastMillis = millis();
    exposureCount++;
  }
}
