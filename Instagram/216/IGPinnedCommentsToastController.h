//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGActionableConfirmationToastController, UIView;

@interface IGPinnedCommentsToastController : NSObject
{
    IGActionableConfirmationToastController *_toastController;
    UIView *_toastContainerView;
    CDUnknownBlockType _onSeeCommentActionBlock;
}

- (void).cxx_destruct;
- (void)updateToastBottomInset:(double)arg1;
- (void)showUnpinConfirmationToastInContainerView:(id)arg1;
- (void)showPinConfirmaitonToastForComment:(id)arg1 commentsSortOrder:(id)arg2 containerView:(id)arg3 bottomInset:(double)arg4;
- (id)initWithOnSeeCommentActionBlock:(CDUnknownBlockType)arg1;

@end

