//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GenInstDrummerPresetManager, NSArray, NSDictionary, NSString;

@protocol GenInstDrummer_TrackModelProtocolPublic <NSObject>
- (void)recallDefaultPresetForSelectedRegions;
- (GenInstDrummerPresetManager *)presetManager;
- (void)setSelectedGenre:(NSString *)arg1 characterIdentifier:(NSString *)arg2;
- (NSString *)characterTypeIdentifier;
- (NSDictionary *)selectedGenreDict;
- (NSDictionary *)selectedCharacterDict;
- (NSDictionary *)characterForGenreIdentifier:(NSString *)arg1 characterIdentifier:(NSString *)arg2;
- (NSArray *)charactersForGenreIdentifier:(NSString *)arg1;
- (NSString *)selectedCharacterIdentifier;
- (NSString *)selectedGenreIdentifier;
- (NSDictionary *)genreForIdentifier:(NSString *)arg1;
- (NSArray *)genres;
- (void)createDefaultRegions;
- (void)populateDrummerTrack;
- (BOOL)isLibraryValid;
@end

