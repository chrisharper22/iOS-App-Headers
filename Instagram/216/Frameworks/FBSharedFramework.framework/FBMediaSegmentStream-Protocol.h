//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class FBMediaFileStreamListenerAnnouncerWrapper, FBMediaUploadContentSource, NSDictionary, NSString;

@protocol FBMediaSegmentStream <NSObject>
- (NSString *)jobId;
- (unsigned long long)dataSize;
- (NSDictionary *)extraLogging;
- (void)markEndOfStream;
- (void)cancel;
- (void)uploadSegmentWithContent:(FBMediaUploadContentSource *)arg1 segmentType:(unsigned long long)arg2 streamAnnouncer:(FBMediaFileStreamListenerAnnouncerWrapper *)arg3;
- (void)uploadSegmentWithContent:(FBMediaUploadContentSource *)arg1 segmentType:(unsigned long long)arg2;
- (void)uploadSegmentWithContent:(FBMediaUploadContentSource *)arg1 segmentType:(unsigned long long)arg2 isLastSegment:(_Bool)arg3;
@end
