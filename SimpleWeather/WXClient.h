//
//  WXClient.h
//  SimpleWeather
//
//  Created by Yuan Yinhuan on 14-3-29.
//  Copyright (c) 2014年 Yuan Yinhuan. All rights reserved.
//

//#import <Foundation/Foundation.h>
@import CoreLocation;
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>
@import Foundation;

@interface WXClient : NSObject
    - (RACSignal *)fetchJSONFromURL:(NSURL *)url;
    - (RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;
    - (RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;
    - (RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;
@end
