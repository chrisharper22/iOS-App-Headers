//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IGMediaUploadPerformanceLogger : NSObject
{
    NSMutableDictionary *_postIdToPerformanceMarker;
    int _markerID;
}

- (void).cxx_destruct;
- (void)markerEndForUploadFailedWithPostShare:(id)arg1;
- (void)markerEndForUploadSucceededWithPostShare:(id)arg1;
- (void)markerStartWithPostShare:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end

