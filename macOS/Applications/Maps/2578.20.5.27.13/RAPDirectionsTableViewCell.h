//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DirectionsStepTableViewCell.h"

@class GEOComposedRouteStep, NSLayoutConstraint, Route;

__attribute__((visibility("hidden")))
@interface RAPDirectionsTableViewCell : DirectionsStepTableViewCell
{
    Route *_route;
    GEOComposedRouteStep *_step;
    NSLayoutConstraint *_heightConstraint;
}

- (void).cxx_destruct;
- (void)updateHeightForWidth:(double)arg1;
- (void)setRoute:(id)arg1 step:(id)arg2 stepIndex:(unsigned long long)arg3 alignToLeftEdgeIfNoManeuverSign:(BOOL)arg4 size:(long long)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

