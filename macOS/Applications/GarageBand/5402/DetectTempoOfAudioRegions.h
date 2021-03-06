//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SmallSheetController.h"

@class MAKitBox, MAKitButton, NSArray, NSArrayController, NSDictionary, NSView;

@interface DetectTempoOfAudioRegions : SmallSheetController
{
    MAKitBox *m_AdvancedOptionsBox;
    MAKitButton *m_AdvancedOptionsDisclosure;
    NSView *m_AdvancedOptionsView;
    NSArrayController *tempoArrayController;
    NSDictionary *selectedEntry;
    struct DTOAR_Result *result;
    struct CSong *song;
    double preferredTempoBpm;
    int choice;
    _Bool advancedSectionIsVisible;
    NSArray *tempoArray;
    NSArray *tempoArrayVar;
    NSArray *tempoArrayConst;
    _Bool writeTempoInfoToAudioFile;
    _Bool writeTempoAverage;
    _Bool alignFirstRegionBeatToClosestArrangeBeat;
    _Bool applyTempoToProject;
    _Bool applyTempoAverage;
    _Bool continueWithLastTempoAfterRegionEnd;
    _Bool enableFlexTimeMarkerCreation;
    struct DTOAR_Result *resultPtr;
}

+ (id)showAsSheet:(id)arg1 song:(struct CSong *)arg2 withVariableTempoArray:(id)arg3 withConstantTempoArray:(id)arg4 preferredTempo:(float)arg5 result:(struct DTOAR_Result *)arg6;
+ (id)nibName;
@property(nonatomic) _Bool advancedSectionIsVisible; // @synthesize advancedSectionIsVisible;
@property(retain, nonatomic) NSDictionary *selectedEntry; // @synthesize selectedEntry;
@property(nonatomic) _Bool enableFlexTimeMarkerCreation; // @synthesize enableFlexTimeMarkerCreation;
@property(nonatomic) _Bool continueWithLastTempoAfterRegionEnd; // @synthesize continueWithLastTempoAfterRegionEnd;
@property(nonatomic) _Bool applyTempoToProject; // @synthesize applyTempoToProject;
@property(nonatomic) _Bool alignFirstRegionBeatToClosestArrangeBeat; // @synthesize alignFirstRegionBeatToClosestArrangeBeat;
@property(nonatomic) _Bool writeTempoInfoToAudioFile; // @synthesize writeTempoInfoToAudioFile;
@property(retain, nonatomic) NSArray *tempoArrayConst; // @synthesize tempoArrayConst;
@property(retain, nonatomic) NSArray *tempoArrayVar; // @synthesize tempoArrayVar;
@property(retain, nonatomic) NSArray *tempoArray; // @synthesize tempoArray;
@property(nonatomic) int choice; // @synthesize choice;
@property(nonatomic) double preferredTempoBpm; // @synthesize preferredTempoBpm;
@property(nonatomic) struct CSong *song; // @synthesize song;
@property(nonatomic) struct DTOAR_Result *resultPtr; // @synthesize resultPtr;
- (void)selectTempoEntryClosestTo:(double)arg1;
- (void)clickOK:(id)arg1;
- (void)clickCancel:(id)arg1;
- (void)clickAdvancedOptionsDisclosure:(id)arg1;
- (void)makeAdvancedSectionVisible:(_Bool)arg1 displayAndAnimate:(_Bool)arg2;
- (void)dealloc;
- (void)close;
- (void)windowWillClose:(id)arg1;
- (void)updateUI;
- (void)fillResultPtr;
- (void)initParameters;
- (void)updateTempoTable;
@property(nonatomic) _Bool applyTempoAverage;
@property(nonatomic) _Bool writeTempoAverage;

@end

