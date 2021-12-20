//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNetworkCachedData-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface IGNetworkCacheObject : NSObject <NSCoding, IGNetworkCachedData>
{
    NSData *_cachedData;
    NSDate *_lastAccessed;
    NSDate *_fetched;
    NSDate *_dateInvalid;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *dateInvalid; // @synthesize dateInvalid=_dateInvalid;
@property(readonly, nonatomic) NSDate *fetched; // @synthesize fetched=_fetched;
@property(readonly, nonatomic) NSDate *lastAccessed; // @synthesize lastAccessed=_lastAccessed;
@property(readonly, nonatomic) NSData *cachedData; // @synthesize cachedData=_cachedData;
- (void)invalidate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithInvalidationDate:(id)arg1 fetchedDate:(id)arg2 lastAccessed:(id)arg3 cachedData:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

