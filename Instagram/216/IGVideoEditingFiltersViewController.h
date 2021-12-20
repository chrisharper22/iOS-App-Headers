//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFBFilterCollectionControllerDelegate-Protocol.h"
#import "IGFilterCollectionControllerDelegate-Protocol.h"
#import "IGFilterControlViewDelegate-Protocol.h"

@class IGFBFilterCollectionController, IGFilterCollectionController, IGFilterControlView, IGIGLContext, IGUserSession, IGVideoComposition, NSMutableDictionary, NSString, UICollectionView, UIImage;
@protocol IGVideoEditingFiltersViewControllerDelegate;

@interface IGVideoEditingFiltersViewController : IGViewController <IGFBFilterCollectionControllerDelegate, IGFilterCollectionControllerDelegate, IGFilterControlViewDelegate>
{
    IGUserSession *_userSession;
    IGVideoComposition *_videoComposition;
    UIImage *_filterPreviewImage;
    _Bool _useFbIgluFilters;
    IGFilterCollectionController *_igFilterCollectionController;
    IGFBFilterCollectionController *_fbFilterCollectionController;
    UICollectionView *_filterCollectionView;
    IGFilterControlView *_filterControlView;
    double _filterCollectionViewRevealPercentage;
    double _filterControlViewRevealPercentage;
    NSMutableDictionary *_filterStrengthMap;
    IGIGLContext *_iglContext;
    id <IGVideoEditingFiltersViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGVideoEditingFiltersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_animateFilterViewsWithCollectionViewVisible:(_Bool)arg1 controlViewVisible:(_Bool)arg2;
- (void)_configureFilterCollectionView;
- (void)filterControlViewDidTapRotate:(id)arg1;
- (void)filterControlViewDidEndDragging:(id)arg1;
- (void)filterControlViewDidStartDragging:(id)arg1;
- (void)filterControlView:(id)arg1 didChangetintIntensity:(double)arg2 tintType:(unsigned long long)arg3;
- (void)filterControlView:(id)arg1 didChangeTintColor:(unsigned long long)arg2 withTintType:(unsigned long long)arg3;
- (void)filterControlViewNeedUpdateValue;
- (void)filterControlViewDidPressDone:(id)arg1;
- (void)filterControlViewDidPressCancel:(id)arg1;
- (void)filterControlView:(id)arg1 didChangeValue:(double)arg2;
- (void)fbFilterControllerDidStartReordering:(id)arg1;
- (double)fbFilterController:(id)arg1 filterStrengthForIdentifier:(id)arg2;
- (void)fbFilterController:(id)arg1 didSelectFilterStrengthForIdentifier:(id)arg2;
- (void)fbFilterController:(id)arg1 didSelectFilterWithIdentifier:(id)arg2 changed:(_Bool)arg3 willScroll:(_Bool)arg4;
- (void)fbFilterControllerDidGenerateFilterPreview:(id)arg1;
- (void)fbFilterControllerWillGenerateFilterPreview:(id)arg1;
- (void)filterControllerDidStartReordering:(id)arg1;
- (void)filterControllerDidGenerateFilterPreview:(id)arg1;
- (void)filterControllerWillGenerateFilterPreview:(id)arg1;
- (double)filterController:(id)arg1 filterStrengthForClass:(Class)arg2;
- (void)filterController:(id)arg1 didSelectFilterStrengthForClass:(Class)arg2;
- (void)filterController:(id)arg1 didSelectFilterWithClass:(Class)arg2 changed:(_Bool)arg3 willScroll:(_Bool)arg4;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 videoComposition:(id)arg2 useFbIgluFilters:(_Bool)arg3 iglContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

