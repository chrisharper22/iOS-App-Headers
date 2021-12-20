//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSError, NSString;

@interface IGVideoCallCreateRoomResponse : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_success_roomURLString;
    NSString *_success_roomURLStringForCopyPaste;
    NSString *_success_linkId;
    NSString *_success_linkHash;
    NSError *_otherFailure_error;
}

+ (id)successWithRoomURLString:(id)arg1 roomURLStringForCopyPaste:(id)arg2 linkId:(id)arg3 linkHash:(id)arg4;
+ (id)otherFailureWithError:(id)arg1;
+ (id)noLinkedFacebookAccount;
+ (id)invalidServerPayload;
- (void).cxx_destruct;
- (void)matchSuccess:(CDUnknownBlockType)arg1 noLinkedFacebookAccount:(CDUnknownBlockType)arg2 invalidServerPayload:(CDUnknownBlockType)arg3 otherFailure:(CDUnknownBlockType)arg4;

@end
