//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDirectoryEnumerator, NSString, NSURL;

@interface IGFilteredDirectoryEnumerator : NSObject
{
    NSURL *_baseURL;
    NSString *_basePath;
    NSDirectoryEnumerator *_directoryEnumerator;
}

- (void).cxx_destruct;
- (id)resultsUsingFilter:(CDUnknownBlockType)arg1 totalSize:(unsigned long long *)arg2;
- (id)initWithBaseURL:(id)arg1 directoryEnumerator:(id)arg2;

@end
