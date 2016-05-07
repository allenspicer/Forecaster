//
//  Weather+CoreDataProperties.m
//  Forecaster
//
//  Created by Donny Davis on 5/5/16.
//  Copyright © 2016 Donny Davis. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Weather+CoreDataProperties.h"

@implementation Weather (CoreDataProperties)

@dynamic temperature;
@dynamic apparentTemperature;
@dynamic summary;
@dynamic image;
@dynamic location;

@end
