//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSDictionary, NSError;

@protocol FBMediaUploadLogging <NSObject>
- (void)addEntriesFromDictionary:(NSDictionary *)arg1;
- (void)logUploadTransferCancel;
- (void)logUploadTransferFailure:(NSError *)arg1;
- (void)logUploadTransferSuccess;
- (void)logUploadTransferStartIfFirstSegment;
@end
