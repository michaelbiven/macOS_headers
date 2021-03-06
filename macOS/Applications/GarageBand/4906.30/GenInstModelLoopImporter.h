//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GenInstModelLoopImporterFileInfo, NSDictionary;

@interface GenInstModelLoopImporter : NSObject
{
    struct TPosOneBasedTrackNr _trackNr;
    int _folder;
    struct CSong *_song;
    struct CDocumentLogic *_doc;
    struct TSignedPureClock _clock;
    NSDictionary *_genInstChunk;
    GenInstModelLoopImporterFileInfo *_genInstFileInfo;
}

@property(retain) GenInstModelLoopImporterFileInfo *genInstFileInfo; // @synthesize genInstFileInfo=_genInstFileInfo;
@property(retain) NSDictionary *genInstChunk; // @synthesize genInstChunk=_genInstChunk;
@property struct TSignedPureClock clock; // @synthesize clock=_clock;
@property int folder; // @synthesize folder=_folder;
@property struct TPosOneBasedTrackNr trackNr; // @synthesize trackNr=_trackNr;
@property struct CDocumentLogic *doc; // @synthesize doc=_doc;
@property struct CSong *song; // @synthesize song=_song;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dropToTrack:(struct TPosOneBasedTrackNr)arg1 folder:(int)arg2 genInstFileInfo:(id)arg3 clock:(struct TSignedPureClock)arg4;
- (id)dropInfoForDropToTrackInternal:(struct TPosOneBasedTrackNr)arg1 folder:(int)arg2 genInstFileInfo:(id)arg3 clock:(struct TSignedPureClock)arg4;
- (id)dropInfoForDropToTrack:(struct TPosOneBasedTrackNr)arg1 folder:(int)arg2 genInstFileInfo:(id)arg3 clock:(struct TSignedPureClock)arg4;
- (BOOL)changeCharacter;
- (BOOL)createRegion;
- (BOOL)initializeNewlyCreatedTrack;
- (BOOL)createNewTrack;
- (BOOL)hasTrackModelForDropTrack;
- (id)trackModelForDropTrack;
- (id)trackModelForTrackNr:(struct TTrackNr)arg1;
- (struct CVirtualTrack)virtualTrackForDropTrack;
- (BOOL)dropTrackIsEmpty;
- (BOOL)isSameCharacter;
- (long long)sourceTrackType;
- (long long)destinationTrackType;
- (long long)trackTypeFromCharacterDict:(id)arg1;
- (unsigned long long)dropType;
- (BOOL)allowCreationOfAdditionalAnimalTrackForSong;
- (void)dealloc;
- (id)initWithSong:(struct CSong *)arg1;

@end

