//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSURL;

@interface IGARFileURLEvictor : NSObject
{
    NSURL *_rootURL;
    unsigned long long _sizeLimit;
    NSFileManager *_fileManager;
}

- (void).cxx_destruct;
- (_Bool)trimToAddSize:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)updateAccessDateForURL:(id)arg1 error:(id *)arg2;
- (id)initWithRootURL:(id)arg1 sizeLimit:(unsigned long long)arg2;

@end

