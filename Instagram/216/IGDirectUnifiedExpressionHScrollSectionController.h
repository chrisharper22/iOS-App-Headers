//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGDirectUnifiedExpressionHScrollCellDelegate-Protocol.h"

@class IGDirectAnimatedMediaLogger, IGUserSession, NSString;
@protocol IGDirectUnifiedExpressionHScrollSectionControllerDelegate;

@interface IGDirectUnifiedExpressionHScrollSectionController : IGListGenericSectionController <IGDirectUnifiedExpressionHScrollCellDelegate>
{
    IGUserSession *_userSession;
    IGDirectAnimatedMediaLogger *_animatedMediaLogger;
    NSString *_analyticsModule;
    double _messageListHeight;
    double _composerHeight;
    id <IGDirectUnifiedExpressionHScrollSectionControllerDelegate> _delegate;
}

+ (double)heightForHScrollViewModel:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectUnifiedExpressionHScrollSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unifiedExpressionHScrollCell:(id)arg1 didSelectMessageEffect:(id)arg2 text:(id)arg3;
- (void)unifiedExpressionHScrollCell:(id)arg1 didSelectAnimatedModelId:(id)arg2;
- (void)unifiedExpressionHScrollCellDidSelectLike:(id)arg1;
- (struct UIEdgeInsets)inset;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 animatedMediaLogger:(id)arg2 analyticsModule:(id)arg3 messageListHeight:(double)arg4 composerHeight:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

