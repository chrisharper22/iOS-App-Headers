//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@protocol BKBloksDataFetchResponseStatus <NSObject>
- (void)addAdditionalContextToMarker:(int)arg1 withInstanceId:(int)arg2;
- (unsigned long long)totalBytesDownloaded;
- (unsigned long long)totalBytesResponseSize;
- (long long)responseParseEndTimeMs;
- (long long)responseParseStartTimeMs;
- (long long)timeToLastByteMs;
- (long long)timeToFirstByteMs;
- (long long)requestStartTimeMs;
@end

