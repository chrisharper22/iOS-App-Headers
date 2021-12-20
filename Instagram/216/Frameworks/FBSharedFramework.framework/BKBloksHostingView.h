//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class BKContext, BKLayoutController, BKModel, NSDictionary, NSObject;
@protocol BKBloksHostingViewDelegate, OS_dispatch_queue;

@interface BKBloksHostingView : UIView
{
    BKContext *_context;
    BKLayoutController *_layoutController;
    UIView *_contentView;
    BKModel *_boundModel;
    BKModel *_unboundModel;
    NSDictionary *_externalVariablesSnapshot;
    NSDictionary *_internalVariablesSnapshot;
    NSDictionary *_dataPropsEntries;
    NSDictionary *_parseResultUserInfo;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    _Bool _enableBackgroundBind;
    _Bool _enableBackgroundLayout;
    _Bool _didComputeLayoutInBackground;
    _Bool _didChangeSizeInBackground;
    id <BKBloksHostingViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BKBloksHostingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setupBackgroundUpdates:(id)arg1;
- (void)_computeAndApplyLayoutIfNecessary:(struct CKSizeRange)arg1;
- (void)dealloc;
- (void)_didFinishBind:(const struct BKBindResult *)arg1 context:(id)arg2;
- (void)_bindVariablesOnBackgroundThread:(id)arg1;
- (void)_bindVariablesOnMainThread:(id)arg1;
- (void)_render;
- (void)_treeManager:(id)arg1 didChangeToUnboundTree:(id)arg2 internalVariables:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateExternalVariables:(id)arg1;
- (void)updateWithParseResult:(id)arg1 context:(id)arg2 externalVariables:(id)arg3;

@end

