//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "BKBloksHostingViewDelegate-Protocol.h"
#import "IGBloksErrorViewDelegate-Protocol.h"
#import "IGBloksScreenNavbarUpdating-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"

@class BKBloksHostingView, BKBloksSurfaceCore, BKContext, BKParseResult, IGBloksBarButtonItem, IGBloksTTRCListener, IGPartialModalSheetHeightBehavior, NSArray, NSString, UIView;

@interface IGBloksBottomSheetViewController : IGViewController <BKBloksHostingViewDelegate, IGBloksErrorViewDelegate, IGPartialModalSheetListener, IGBloksScreenNavbarUpdating>
{
    BKContext *_context;
    BKBloksHostingView *_bloksView;
    UIView *_surfaceCoreView;
    BKParseResult *_bottomSheetContent;
    BKBloksSurfaceCore *_surfaceCore;
    IGBloksTTRCListener *_ttrcListener;
    CDUnknownBlockType _onDismiss;
    IGPartialModalSheetHeightBehavior *_previousBottomSheetBehavior;
    _Bool _rendersInUnsafeArea;
    struct CGSize _maxPartialModalConstrainingSize;
    struct IGBloksScreenNavbarModel _navbarModel;
    IGBloksBarButtonItem *_leftBarButtonItem;
    NSArray *_rightBarButtonItems;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)bloksErrorViewActionButtonTapped:(id)arg1;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (struct CKSizeRange)_sizeRangeForBoundingSize:(struct CGSize)arg1;
- (void)bloksHostingViewDidInvalidateSize:(struct CGSize)arg1;
- (void)_refreshBloksData;
- (void)setMaxPartialModalConstrainingSize:(struct CGSize)arg1;
- (_Bool)prefersNavigationBarHidden;
- (void)viewWillLayoutSubviews;
- (struct UIEdgeInsets)preferredContentInsets;
- (_Bool)prefersNavigationBarDividerHidden;
- (void)_configureNavbar;
- (void)updateNavigationBar:(struct IGBloksScreenNavbarModel)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithObjectSet:(id)arg1 screenBottomSheetModel:(struct IGBloksScreenBottomSheetModel)arg2 onDismiss:(CDUnknownBlockType)arg3 previousPartialSheetHeightBehavor:(id)arg4;
- (id)initWithObjectSet:(id)arg1 parseResult:(id)arg2 onDismiss:(CDUnknownBlockType)arg3 previousPartialSheetHeightBehavor:(id)arg4;
- (id)initWithObjectSet:(id)arg1 bottomSheetModel:(struct BKBloksBottomSheetModel)arg2 onDismiss:(CDUnknownBlockType)arg3 previousPartialSheetHeightBehavor:(id)arg4;
- (id)_initWithAnalyticsModule:(id)arg1 objectSet:(id)arg2 onDismiss:(CDUnknownBlockType)arg3 previousPartialSheetHeightBehavor:(id)arg4 navbarModel:(struct IGBloksScreenNavbarModel)arg5 rendersInUnsafeArea:(_Bool)arg6 bottomSheetContent:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

