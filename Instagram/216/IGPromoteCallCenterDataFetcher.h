//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGPromoteCallCenterDataFetcher : NSObject
{
}

+ (void)submitCallCenterCancelBookingRequestWithAdAccountId:(id)arg1 userSession:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)submitCallCenterBookingRequestWithAdAccountId:(id)arg1 userSession:(id)arg2 name:(id)arg3 companyName:(id)arg4 emailAddress:(id)arg5 phoneNumber:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
+ (void)fetchCallCenterScreenDetailWithAdAccountId:(id)arg1 userSession:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;

@end

