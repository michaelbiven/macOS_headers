//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FRMeteorologistObserving-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class FRMeteorologist, NSDictionary, NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol FRMastheadViewDelegate;

@interface FRMastheadView : UIView <FRMeteorologistObserving, UIGestureRecognizerDelegate>
{
    BOOL _showingWeatherAttribution;
    id <FRMastheadViewDelegate> _delegate;
    long long _type;
    long long _theme;
    NSDictionary *_sharedMastheadTextAttributes;
    UILabel *_mastheadFirstLineLabel;
    UILabel *_mastheadSecondLineLabel;
    UILabel *_temperatureLabel;
    UIImageView *_identImageView;
    UIImageView *_weatherChannelImageView;
    FRMeteorologist *_meteorologist;
    UITapGestureRecognizer *_mastheadTapGestureRecognizer;
    CDStruct_13625497 _settings;
}

+ (double)heightForType:(long long)arg1;
+ (CDStruct_13625497)_settingsForType:(long long)arg1;
+ (double)_heightFromSettings:(CDStruct_13625497)arg1;
@property(nonatomic) __weak UITapGestureRecognizer *mastheadTapGestureRecognizer; // @synthesize mastheadTapGestureRecognizer=_mastheadTapGestureRecognizer;
@property(retain, nonatomic) FRMeteorologist *meteorologist; // @synthesize meteorologist=_meteorologist;
@property(nonatomic) __weak UIImageView *weatherChannelImageView; // @synthesize weatherChannelImageView=_weatherChannelImageView;
@property(nonatomic) BOOL showingWeatherAttribution; // @synthesize showingWeatherAttribution=_showingWeatherAttribution;
@property(nonatomic) __weak UIImageView *identImageView; // @synthesize identImageView=_identImageView;
@property(nonatomic) __weak UILabel *temperatureLabel; // @synthesize temperatureLabel=_temperatureLabel;
@property(nonatomic) __weak UILabel *mastheadSecondLineLabel; // @synthesize mastheadSecondLineLabel=_mastheadSecondLineLabel;
@property(nonatomic) __weak UILabel *mastheadFirstLineLabel; // @synthesize mastheadFirstLineLabel=_mastheadFirstLineLabel;
@property(copy, nonatomic) NSDictionary *sharedMastheadTextAttributes; // @synthesize sharedMastheadTextAttributes=_sharedMastheadTextAttributes;
@property(nonatomic) CDStruct_13625497 settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) long long theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <FRMastheadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_grayTextColor;
- (void)forecastDidEncounterError:(id)arg1;
- (void)forecastDidChange:(id)arg1;
- (void)forecastDidSetup;
- (void)forecastDidFirstAcquireLocation:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (void)updateWithForecast:(id)arg1;
- (double)_minimumCompactTemperatureLabelWidth;
- (void)setFormattedTemperature:(id)arg1;
- (void)setMastheadSecondLineString:(id)arg1;
- (void)_updateDate;
- (void)_willEnterForeground:(id)arg1;
- (void)_willEnterBackground:(id)arg1;
- (void)_significantTimeChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)toggleWeatherAttribution;
- (void)hideWeatherAttribution;
- (void)showWeatherAttribution;
- (void)interfaceStyleDidChange:(long long)arg1;
- (void)styleDidChange;
- (void)mastheadTapped:(id)arg1;
- (id)initWithType:(long long)arg1 theme:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

