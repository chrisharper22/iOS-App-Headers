//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGAdPlatformDuplicateInvalidationResult : NSObject
{
    unsigned long long _duplicateReason;
    NSString *_duplicateFromTrackingToken;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *duplicateFromTrackingToken; // @synthesize duplicateFromTrackingToken=_duplicateFromTrackingToken;
@property(readonly, nonatomic) unsigned long long duplicateReason; // @synthesize duplicateReason=_duplicateReason;
- (id)initWithDuplicateReason:(unsigned long long)arg1 duplicateFromTrackingToken:(id)arg2;

@end

