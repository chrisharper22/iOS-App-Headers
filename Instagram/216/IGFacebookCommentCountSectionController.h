//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSingleSectionController.h>

#import "IGFacebookCommentThreadViewControllerDelegate-Protocol.h"

@class IGCommentThreadConfiguration, IGFacebookCommentCountViewModel, IGFacebookCommentsFlowCoordinator, IGMedia, IGUserSession, NSString;

@interface IGFacebookCommentCountSectionController : IGListBindingSingleSectionController <IGFacebookCommentThreadViewControllerDelegate>
{
    IGMedia *_media;
    IGUserSession *_userSession;
    IGCommentThreadConfiguration *_commentThreadConfiguration;
    NSString *_fbPostId;
    CDUnknownBlockType _impressionTrackingBlock;
    CDUnknownBlockType _clickLogginBlock;
    IGFacebookCommentsFlowCoordinator *_flowCoordinator;
    IGFacebookCommentCountViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)viewControllerDidUpdateFacebookCommentCount:(long long)arg1;
- (void)_startIGVPTrackingForCell:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemWithCell:(id)arg1;
- (struct CGSize)sizeForViewModel:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;
- (id)initWithMedia:(id)arg1 fbPostId:(id)arg2 userSession:(id)arg3 commentThreadConfiguration:(id)arg4 impressionTrackingBlock:(CDUnknownBlockType)arg5 clickLogginBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

