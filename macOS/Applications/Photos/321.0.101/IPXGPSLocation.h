//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, IPXPlaceAnnotation, NSNumber;

__attribute__((visibility("hidden")))
@interface IPXGPSLocation : NSObject
{
    IPXPlaceAnnotation *_placeAnnotation;
    CLLocation *_location;
    NSNumber *_locationType;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(retain) NSNumber *locationType; // @synthesize locationType=_locationType;
@property(retain) CLLocation *location; // @synthesize location=_location;
@property(readonly) IPXPlaceAnnotation *placeAnnotation; // @synthesize placeAnnotation=_placeAnnotation;
@property struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (id)initWithLocation:(id)arg1 placeAnnotation:(id)arg2;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 placeAnnotation:(id)arg2;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 placeAnnotation:(id)arg3;

@end

