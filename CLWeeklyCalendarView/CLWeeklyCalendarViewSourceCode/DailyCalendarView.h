//
//  DailyCalendarView.h
//  Deputy
//
//  Created by Caesar on 30/10/2014.
//  Copyright (c) 2014 Caesar Li. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 Changes the enabled dates appearance in the calendar view.
 @see CLEnabledDatesAppearanceBackground
 @see CLEnabledDatesAppearanceDot
 */
typedef enum : NSUInteger {
    /** Changes background colors between enabled and disabled dates */
    CLEnabledDatesAppearanceBackground,
    /** Adds a dot below enabled dates */
    CLEnabledDatesAppearanceDot,
} CLEnabledDatesAppearance;

@protocol DailyCalendarViewDelegate <NSObject>

-(void)dailyCalendarViewDidSelect: (NSDate *)date;

@end

@interface DailyCalendarView : UIView

@property (nonatomic, weak) id<DailyCalendarViewDelegate> delegate;
@property (nonatomic, strong) NSDate *date;
@property (nonatomic) BOOL blnSelected;

@property (nonatomic) BOOL dateEnabled;
@property (nonatomic) BOOL disabledDatesInteractionEnabled;
@property (nonatomic) CLEnabledDatesAppearance enabledDatesAppearance;

@property (nonatomic, strong) UIColor *pastDayNumberTextColor;
@property (nonatomic, strong) UIColor *futureDayNumberTextColor;
@property (nonatomic, strong) UIColor *currentDayNumberTextColor;
@property (nonatomic, strong) UIColor *selectedDayNumberTextColor;
@property (nonatomic, strong) UIColor *selectedCurrentDayNumberTextColor;
@property (nonatomic, strong) UIColor *dotTextColor;
@property (nonatomic, strong) UIColor *currentDayNumberBackgroundColor;
@property (nonatomic, strong) UIColor *selectedDayNumberBackgroundColor;
@property (nonatomic, strong) UIColor *selectedDayNumberBorderColor;
@property (nonatomic, strong) UIColor *selectedCurrentDayNumberBackgroundColor;

@property (nonatomic, strong) UIColor *disabledDayBackgroundColor;
@property (nonatomic, strong) UIColor *disabledDayTextColor;

- (void)markSelected:(BOOL)blnSelected;

@end
