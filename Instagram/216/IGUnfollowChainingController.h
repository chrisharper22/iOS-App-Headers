//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAsyncTask, IGUnfollowChainingCountChecker, IGUnfollowChainingLogger, IGUser, IGUserSession;
@protocol IGUnfollowChainingControllerDelegate;

@interface IGUnfollowChainingController : NSObject
{
    IGUserSession *_userSession;
    IGUnfollowChainingCountChecker *_countChecker;
    IGUnfollowChainingLogger *_logger;
    IGUser *_targetUser;
    IGAsyncTask *_fetchCountTask;
    id <IGUnfollowChainingControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGUnfollowChainingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleToastActionWithCount:(unsigned long long)arg1;
- (void)_showChainingWithTargetUser:(id)arg1 count:(unsigned long long)arg2;
- (void)_resetState;
- (void)showUnfollowChainingIfPossibleForTargetUser:(id)arg1;
- (void)prefetchUnfollowChainingCountForTargetUser:(id)arg1;
- (id)initWithUserSession:(id)arg1 unfollowChainingCountChecker:(id)arg2 logger:(id)arg3;
- (id)initWithUserSession:(id)arg1 module:(id)arg2;

@end

