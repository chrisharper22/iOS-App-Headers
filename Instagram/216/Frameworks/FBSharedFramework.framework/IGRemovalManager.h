//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGTolerantRemovalDelegate, NSFileManager;

@interface IGRemovalManager : NSObject
{
    NSFileManager *_fileManager;
    IGTolerantRemovalDelegate *_removalDelegate;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)removeItemAtPath:(id)arg1 error:(id *)arg2;
- (id)_init;

@end

