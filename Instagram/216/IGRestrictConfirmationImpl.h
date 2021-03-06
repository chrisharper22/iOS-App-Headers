//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRestrictConfirmationIntf-Protocol.h"

@class NSString;

@interface IGRestrictConfirmationImpl : NSObject <IGRestrictConfirmationIntf>
{
}

+ (id)initRestrictConfirmationSheetWithUserSession:(id)arg1 targetUser:(id)arg2 didTapOnRestrictUserBlock:(CDUnknownBlockType)arg3 didCancelRestrictBlock:(CDUnknownBlockType)arg4;
+ (void)showRestrictConfirmationSheetWithUserSession:(id)arg1 targetUser:(id)arg2 presentingViewController:(id)arg3 didTapOnRestrictUserBlock:(CDUnknownBlockType)arg4 didCancelRestrictBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

