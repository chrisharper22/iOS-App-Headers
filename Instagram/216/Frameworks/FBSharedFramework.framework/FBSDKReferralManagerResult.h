//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FBSDKReferralManagerResult : NSObject
{
    _Bool _isCancelled;
    NSArray *_referralCodes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *referralCodes; // @synthesize referralCodes=_referralCodes;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (id)initWithReferralCodes:(id)arg1 isCancelled:(_Bool)arg2;

@end

