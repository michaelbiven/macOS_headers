//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPSCNNBatchNormalizationDataSource.h"
#import "NSCopying.h"

@class MLFoundationTensor, NSString;

@interface _MLFGPUBatchNormDataSource : NSObject <NSCopying, MPSCNNBatchNormalizationDataSource>
{
    float _varianceEpsilon;
    unsigned long long _channels;
    MLFoundationTensor *_means;
    MLFoundationTensor *_variances;
    MLFoundationTensor *_betas;
    MLFoundationTensor *_gammas;
}

+ (id)datasourceWithChannels:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 epsilon:(float)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) float varianceEpsilon; // @synthesize varianceEpsilon=_varianceEpsilon;
@property(readonly, nonatomic) MLFoundationTensor *gammas; // @synthesize gammas=_gammas;
@property(readonly, nonatomic) MLFoundationTensor *betas; // @synthesize betas=_betas;
@property(readonly, nonatomic) MLFoundationTensor *variances; // @synthesize variances=_variances;
@property(readonly, nonatomic) MLFoundationTensor *means; // @synthesize means=_means;
@property(readonly, nonatomic) unsigned long long channels; // @synthesize channels=_channels;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)epsilon;
- (float *)variance;
- (void)purge;
- (unsigned long long)numberOfFeatureChannels;
- (float *)mean;
- (BOOL)load;
- (id)label;
- (float *)gamma;
- (float *)beta;
- (id)initWithChannels:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 epsilon:(float)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

