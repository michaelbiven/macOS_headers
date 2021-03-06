//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXBrowserControllerBarsHelperDataSource-Protocol.h"
#import "IPXMemoryActionHelperDataSource-Protocol.h"
#import "IPXMemoryActionHelperDelegate-Protocol.h"
#import "IPXPhotosGridSliderController-Protocol.h"
#import "IPXScrollableTestElement-Protocol.h"
#import "IPXSelectionContainerProvider-Protocol.h"
#import "MOAssetsViewDataSource-Protocol.h"
#import "MOAssetsViewDataSource_Rearranging-Protocol.h"
#import "MOAssetsViewDelegate-Protocol.h"
#import "MOAssetsViewDelegate_Rearranging-Protocol.h"
#import "NSMenuItemValidation-Protocol.h"
#import "PXChangeObserver-Protocol.h"
#import "PXDeferrableDataSourceManagerDelegate-Protocol.h"
#import "PXUserInterfaceFeatureViewController-Protocol.h"

@class IPXBrowserControllerBarsHelper, IPXFavoriteMemoriesLayout, IPXFilePromiseHelper, IPXMemoryActionHelper, IPXPhotosGridSliderController, IPXPlaceholderViewHelper, IPXSelectionContainer, IPXWorkspaceController, MOAssetsView, NSDictionary, NSScrollView, NSString, PHPhotoLibrary, PXDeferrableDataSourceManager, PXMemoriesDataSource, PXMemoriesSpec, PXSectionedSelectionManager, PXUIMediaProvider;
@protocol PXBrowserSelectionSnapshot, PXViewControllerEventTracker;

__attribute__((visibility("hidden")))
@interface IPXFavoriteMemoriesGridViewController : IPXViewController <PXChangeObserver, PXDeferrableDataSourceManagerDelegate, IPXPhotosGridSliderController, IPXBrowserControllerBarsHelperDataSource, IPXMemoryActionHelperDataSource, IPXMemoryActionHelperDelegate, PXUserInterfaceFeatureViewController, IPXSelectionContainerProvider, MOAssetsViewDelegate, MOAssetsViewDataSource, MOAssetsViewDelegate_Rearranging, MOAssetsViewDataSource_Rearranging, IPXScrollableTestElement, NSMenuItemValidation>
{
    BOOL _ignoreSelectionManagerUpdates;
    PHPhotoLibrary *_photoLibrary;
    IPXPhotosGridSliderController *_sliderController;
    IPXPlaceholderViewHelper *_placeholderViewHelper;
    IPXBrowserControllerBarsHelper *_barsHelper;
    IPXFilePromiseHelper *_filePromiseHelper;
    IPXMemoryActionHelper *_actionHelper;
    PXMemoriesSpec *_spec;
    id <PXViewControllerEventTracker> _eventTracker;
    MOAssetsView *_assetsView;
    IPXFavoriteMemoriesLayout *_customLayout;
    PXDeferrableDataSourceManager *_dataSourceManager;
    PXSectionedSelectionManager *_selectionManager;
    PXUIMediaProvider *_mediaProvider;
    PXMemoriesDataSource *_currentDataSource;
}

+ (BOOL)canProvideViewControllersForNavigationDestination:(id)arg1 library:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) PXMemoriesDataSource *currentDataSource; // @synthesize currentDataSource=_currentDataSource;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, nonatomic) PXDeferrableDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) IPXFavoriteMemoriesLayout *customLayout; // @synthesize customLayout=_customLayout;
@property(readonly, nonatomic) MOAssetsView *assetsView; // @synthesize assetsView=_assetsView;
@property(readonly, nonatomic) id <PXViewControllerEventTracker> eventTracker; // @synthesize eventTracker=_eventTracker;
@property(readonly, nonatomic) PXMemoriesSpec *spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) IPXMemoryActionHelper *actionHelper; // @synthesize actionHelper=_actionHelper;
@property(readonly, nonatomic) IPXFilePromiseHelper *filePromiseHelper; // @synthesize filePromiseHelper=_filePromiseHelper;
@property(readonly, nonatomic) IPXBrowserControllerBarsHelper *barsHelper; // @synthesize barsHelper=_barsHelper;
@property(readonly, nonatomic) IPXPlaceholderViewHelper *placeholderViewHelper; // @synthesize placeholderViewHelper=_placeholderViewHelper;
@property(readonly, nonatomic) IPXPhotosGridSliderController *sliderController; // @synthesize sliderController=_sliderController;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) NSDictionary *testElement_scrollingExtraInformation;
@property(readonly, nonatomic) NSScrollView *testElement_scrollView;
- (id)_testElement_currentMediaView;
- (void)_transitionToDataSource:(id)arg1 withDidUpdateBlock:(CDUnknownBlockType)arg2;
- (void)_resumeDataSourceChanges;
- (void)dataSourceManager:(id)arg1 willSetDataSource:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)shouldSuspendDataSourceChangesForDataSourceManager:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)keyDown:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)a_zoomOut:(id)arg1;
- (void)a_zoomIn:(id)arg1;
- (void)a_openSelectedItems:(id)arg1;
- (void)a_debugItem:(id)arg1;
- (void)copy:(id)arg1;
- (void)a_trashItem:(id)arg1;
- (void)a_favoriteItem:(id)arg1;
@property(readonly, nonatomic) long long userInterfaceFeature;
- (void)actionHelper:(id)arg1 presentViewControllerAsSheet:(id)arg2;
- (id)windowForActionFlowsFromActionHelper:(id)arg1;
- (id)undoManagerForActionHelper:(id)arg1;
- (id)selectedMemoriesInActionHelper:(id)arg1;
- (unsigned long long)numberOfSelectedMemoriesInActionHelper:(id)arg1;
- (id)placeholderMessage;
- (id)placeholderTitle;
- (BOOL)isPlaceholderVisible;
@property(readonly, nonatomic) id <PXBrowserSelectionSnapshot> selectionSnapshot;
- (void)photosGridSliderController:(id)arg1 didEndSlidingWithValue:(unsigned long long)arg2;
- (void)photosGridSliderController:(id)arg1 didChangeValue:(unsigned long long)arg2;
- (void)assetsView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (void)assetsView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3;
- (unsigned long long)assetsView:(id)arg1 draggingSession:(id)arg2 sourceOperationMaskForDraggingContext:(long long)arg3;
- (id)assetsView:(id)arg1 pasteboardWriterForItemAtIndexPath:(id)arg2;
- (id)assetsView:(id)arg1 imageForDraggedItemAtIndexPath:(id)arg2;
- (BOOL)assetsViewUpdatesLayoutOnDrag:(id)arg1;
- (BOOL)assetsView:(id)arg1 canMoveItemsAtIndexPaths:(id)arg2;
- (void)assetsView:(id)arg1 assetWasDoubleClickedAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (void)assetsView:(id)arg1 assetWasRightClickedAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (id)assetsView:(id)arg1 mediaItemAtIndexPath:(id)arg2;
- (id)assetsView:(id)arg1 cellReuseIdentifierAtIndexPath:(id)arg2;
- (long long)assetsView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInAssetsView:(id)arg1;
- (void)assetsViewCanFinallyPerformChanges:(id)arg1;
- (void)assetsView:(id)arg1 willUpdateCell:(id)arg2 withMediaItem:(id)arg3 atIndexPath:(id)arg4;
- (void)assetsView:(id)arg1 magnifyWithEvent:(id)arg2;
- (void)assetsView:(id)arg1 willUpdateSupplementaryView:(id)arg2 ofKind:(id)arg3 withMediaSection:(id)arg4 atIndexPath:(id)arg5;
- (BOOL)assetsView:(id)arg1 shouldShowFooterAtIndexPath:(id)arg2;
- (id)customStyleSupplementaryViewClassesForAssetsView:(id)arg1;
- (id)customStyleCellClassesForAssetsView:(id)arg1;
- (id)customStyleLayoutForAssetsView:(id)arg1;
- (void)assetsView:(id)arg1 didChangeSelectionByAddingIndexPaths:(id)arg2 removingIndexPaths:(id)arg3 animated:(BOOL)arg4;
- (id)preferredFirstResponder;
- (id)navigationDestination;
- (void)didUpdateLayoutGuides;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_configureNavigationItem;
- (id)_createInitialDataSourceManager;
- (id)selectionAnchorViewForAction:(SEL)arg1;
@property(readonly, nonatomic) IPXSelectionContainer *selectionContainer;
- (void)_updateVisibleSelectedIndexPathsFromSelectionManager;
- (void)_performSelectionManagerChange:(CDUnknownBlockType)arg1;
- (void)_endIgnoringSelectionManagerUpdates;
- (void)_beginIgnoringSelectionManagerUpdates;
- (void)_showMemoryAtIndexPath:(id)arg1;
- (id)_memoryAtIndexPath:(id)arg1;
- (id)_memoryInfoAtIndexPath:(id)arg1;
- (void)_reflectContentChange;
- (void)_updateContentInsetFromLayoutGuides;
- (struct NSEdgeInsets)viewContentInsets;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL testElement_isEmpty;
@property(readonly, nonatomic) BOOL testElement_isReady;
@property(readonly, nonatomic) IPXWorkspaceController *workspaceController;

@end

