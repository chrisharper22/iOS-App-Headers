//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAnalyticsStorageProtocol-Protocol.h>

@class NSString;
@protocol IGDateScheduler;

@interface IGAnalyticsStorage : NSObject <IGAnalyticsStorageProtocol>
{
    NSString *_storagePath;
    double _dataExpirationDelay;
    id <IGDateScheduler> _scheduler;
}

- (void).cxx_destruct;
- (id)readExposureTimestamps;
- (void)writeExposureTimestamps:(id)arg1;
- (id)initWithStoragePath:(id)arg1 dataExpirationDelay:(double)arg2 scheduler:(id)arg3;
- (id)initWithDirectoryPath:(id)arg1 uniqueIdentifier:(id)arg2 dataExpirationDelay:(double)arg3 scheduler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

