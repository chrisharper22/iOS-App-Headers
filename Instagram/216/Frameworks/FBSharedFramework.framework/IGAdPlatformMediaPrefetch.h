//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAdPlatformToolbox;
@protocol IGAdInsertionDataSource;

@interface IGAdPlatformMediaPrefetch : NSObject
{
    id <IGAdInsertionDataSource> _adInsertionDataSource;
    IGAdPlatformToolbox *_adPlatformToolbox;
}

- (void).cxx_destruct;
- (void)prefetchWithRequestManagementKit:(id)arg1 graphSurfaceType:(long long)arg2 containerModule:(id)arg3;
- (id)initWithAdPlatformToolbox:(id)arg1 adInsertionDataSource:(id)arg2;

@end

