//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol IGUserLauncherSet;

@interface IGMediaQualityDataStore : NSObject
{
    NSURL *_baseURL;
    NSMutableDictionary *_timestamps;
    id <IGUserLauncherSet> _launcherSet;
}

- (void).cxx_destruct;
- (id)_urlForMediaId:(id)arg1;
- (id)_urlForImageWithTimestamp:(CDStruct_1b6d18a9)arg1 mediaId:(id)arg2;
- (void)_saveTimestamp:(CDStruct_1b6d18a9)arg1 mediaId:(id)arg2;
- (void)clearImagesForMediaId:(id)arg1;
- (id)timestampsForMediaId:(id)arg1;
- (id)imageWithTimestamp:(CDStruct_1b6d18a9)arg1 mediaId:(id)arg2;
- (void)saveImage:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2 mediaId:(id)arg3 error:(id *)arg4;
- (id)initWithLauncherSet:(id)arg1;

@end

