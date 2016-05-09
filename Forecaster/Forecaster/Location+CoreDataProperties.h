//
//  Location+CoreDataProperties.h
//  Forecaster
//
//  Created by Donny Davis on 5/7/16.
//  Copyright © 2016 Donny Davis. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Location.h"

NS_ASSUME_NONNULL_BEGIN

@interface Location (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *city;
@property (nullable, nonatomic, retain) NSNumber *latitude;
@property (nullable, nonatomic, retain) NSNumber *longitude;
@property (nullable, nonatomic, retain) NSString *state;
@property (nullable, nonatomic, retain) NSNumber *zipCode;
@property (nullable, nonatomic, retain) NSString *image;
@property (nullable, nonatomic, retain) NSString *summary;
@property (nullable, nonatomic, retain) NSNumber *apparentTemperature;
@property (nullable, nonatomic, retain) NSNumber *temperature;
@property (nullable, nonatomic, retain) NSString *day1Title;
@property (nullable, nonatomic, retain) NSString *day2Title;
@property (nullable, nonatomic, retain) NSString *day3Title;
@property (nullable, nonatomic, retain) NSString *day1Image;
@property (nullable, nonatomic, retain) NSString *day2Image;
@property (nullable, nonatomic, retain) NSString *day3Image;
@property (nullable, nonatomic, retain) NSNumber *day1feelsLike;
@property (nullable, nonatomic, retain) NSNumber *day2FeelsLike;
@property (nullable, nonatomic, retain) NSNumber *day3FeelsLike;
@property (nullable, nonatomic, retain) NSNumber *day1Temp;
@property (nullable, nonatomic, retain) NSNumber *day2Temp;
@property (nullable, nonatomic, retain) NSNumber *day3Temp;




@end

NS_ASSUME_NONNULL_END
