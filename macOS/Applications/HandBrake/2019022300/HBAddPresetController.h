//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTouchBarDelegate.h"
#import "NSTouchBarProvider.h"

@class HBMutablePreset, HBPreset, HBPresetsManager, NSBox, NSPopUpButton, NSString, NSTextField, NSTouchBar;

@interface HBAddPresetController : NSWindowController <NSTouchBarProvider, NSTouchBarDelegate>
{
    BOOL _defaultToCustom;
    int _width;
    int _height;
    HBPreset *_preset;
    NSTextField *_name;
    NSTextField *_desc;
    NSPopUpButton *_categories;
    NSPopUpButton *_picSettingsPopUp;
    NSTextField *_picWidth;
    NSTextField *_picHeight;
    NSBox *_picWidthHeightBox;
    HBMutablePreset *_mutablePreset;
    HBPreset *_selectedCategory;
    HBPresetsManager *_manager;
    NSWindowController *_defaultsController;
}

@property(retain, nonatomic) NSWindowController *defaultsController; // @synthesize defaultsController=_defaultsController;
@property(nonatomic) BOOL defaultToCustom; // @synthesize defaultToCustom=_defaultToCustom;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(retain, nonatomic) HBPresetsManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) HBPreset *selectedCategory; // @synthesize selectedCategory=_selectedCategory;
@property(retain, nonatomic) HBMutablePreset *mutablePreset; // @synthesize mutablePreset=_mutablePreset;
@property NSBox *picWidthHeightBox; // @synthesize picWidthHeightBox=_picWidthHeightBox;
@property NSTextField *picHeight; // @synthesize picHeight=_picHeight;
@property NSTextField *picWidth; // @synthesize picWidth=_picWidth;
@property NSPopUpButton *picSettingsPopUp; // @synthesize picSettingsPopUp=_picSettingsPopUp;
@property NSPopUpButton *categories; // @synthesize categories=_categories;
@property NSTextField *desc; // @synthesize desc=_desc;
@property NSTextField *name; // @synthesize name=_name;
@property(retain, nonatomic) HBPreset *preset; // @synthesize preset=_preset;
- (void).cxx_destruct;
- (void)openUserGuide:(id)arg1;
- (void)cancel:(id)arg1;
- (void)add:(id)arg1;
- (void)showSubtitlesSettingsSheet:(id)arg1;
- (void)showAudioSettingsSheet:(id)arg1;
- (void)addPresetPicDropdownChanged:(id)arg1;
- (void)selectCategoryFromMenu:(id)arg1;
- (void)showNewCategoryWindow:(id)arg1;
- (id)buildMenuItemWithCategory:(id)arg1;
- (void)buildCategoriesMenu;
- (void)windowDidLoad;
- (id)initWithPreset:(id)arg1 presetManager:(id)arg2 customWidth:(int)arg3 customHeight:(int)arg4 defaultToCustom:(BOOL)arg5;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSTouchBar *touchBar; // @dynamic touchBar;

@end

