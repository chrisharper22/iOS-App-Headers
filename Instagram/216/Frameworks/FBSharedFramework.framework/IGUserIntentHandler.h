//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUserIntentHandling-Protocol.h>

@class NSString;
@protocol IGMultipleAccountHandling, IGUserIntentHandlerDelegate;

@interface IGUserIntentHandler : NSObject <IGUserIntentHandling>
{
    NSString *_userPk;
    id <IGMultipleAccountHandling> _multipleAccountHandler;
    id <IGUserIntentHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGUserIntentHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleIntent:(id)arg1 handlerResult:(id)arg2 designatedController:(id)arg3;
- (void)handleUserScopedIntent:(id)arg1 withDesignatedController:(id)arg2;
- (void)handleUserScopedIntent:(id)arg1;
- (_Bool)canHandleUserScopedIntentOfClassName:(const char *)arg1;
- (id)initWithUserPk:(id)arg1 multipleAccountHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

