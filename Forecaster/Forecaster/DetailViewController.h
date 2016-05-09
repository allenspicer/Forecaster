//
//  DetailViewController.h
//  Forecaster
//
//  Created by Donny Davis on 5/5/16.
//  Copyright © 2016 Donny Davis. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Location.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Location* detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (weak, nonatomic) IBOutlet UILabel *currentLabel;
@property (weak, nonatomic) IBOutlet UILabel *weatherLabel;
@property (weak, nonatomic) IBOutlet UIImageView *weatherImage;
@property (weak, nonatomic) IBOutlet UILabel *temperatureLabel;
@property (weak, nonatomic) IBOutlet UILabel *feelsLikeTempLabel;
@property (weak, nonatomic) IBOutlet UILabel *day1Title;
@property (weak, nonatomic) IBOutlet UILabel *day2Title;
@property (weak, nonatomic) IBOutlet UILabel *day3Title;
@property (weak, nonatomic) IBOutlet UIImageView *day1Image;
@property (weak, nonatomic) IBOutlet UIImageView *day2Image;
@property (weak, nonatomic) IBOutlet UIImageView *day3Image;
@property (weak, nonatomic) IBOutlet UILabel *day1feelsLike;
@property (weak, nonatomic) IBOutlet UILabel *day2FeelsLike;
@property (weak, nonatomic) IBOutlet UILabel *day3FeelsLike;
@property (weak, nonatomic) IBOutlet UILabel *day1Temp;
@property (weak, nonatomic) IBOutlet UILabel *day2Temp;
@property (weak, nonatomic) IBOutlet UILabel *day3Temp;



@end

