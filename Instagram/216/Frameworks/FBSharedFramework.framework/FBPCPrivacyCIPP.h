//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBPCPrivacyCIPP : NSObject
{
}

+ (void)_chainPolicy:(id)arg1 fromObject:(id)arg2 onObject:(id)arg3;
+ (_Bool)flowsFrom:(id)arg1 to:(id)arg2;
+ (id)policyForObject:(id)arg1;
+ (id)retrieveProtectedObject:(id)arg1 ifFlowsTo:(id)arg2 error:(id *)arg3;
+ (id)protectAndMaskObject:(id)arg1 withPolicy:(id)arg2 withMaskingObject:(id)arg3 error:(id *)arg4;
+ (id)protectObject:(id)arg1 withPolicy:(id)arg2 error:(id *)arg3;
+ (id)protectAndCopyObject:(id)arg1 withPolicy:(id)arg2 error:(id *)arg3;

@end

