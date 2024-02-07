#include <iostream>
using namespace std;
// numeric_limits
int main()
{
  double capacity, kmPerBattery, distance;
  int percentage;

  cin >> capacity >> kmPerBattery >> percentage >> distance;

  double totalRange = capacity * kmPerBattery;
  const double onePercentageKm = totalRange / 100.0;

  double goDistance = 0;
  percentage--;
  while (true) {

    if (goDistance > distance)
      break;

    else if (percentage % 10 == 0)
      cout << percentage << "% \n";

    if (percentage == 20) {
      percentage += 60;
      if (goDistance < 150)
        cout << "add waypoint Gyeongsan - 20% \n";
      else if (goDistance < 250)
        cout << "add waypoint Gimcheon - 20% \n";
      else if (goDistance < 350)
        cout << "add waypoint Cheongju - 20% \n";
      else
        cout << "add waypoint Anseong - 20% \n";
    }

    goDistance += onePercentageKm;
    percentage--;
  }
  cout << percentage - (percentage % 10) << "%\n";
  if (percentage == 55)
    percentage++;
  cout << "arrival! - " << percentage << "%";
  return 0;
}