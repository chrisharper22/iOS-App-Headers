//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGDirectoryCleaner : NSObject
{
}

+ (void)_performFolderCleanup:(id)arg1 removeRootFolder:(_Bool)arg2;
+ (_Bool)trashItemAtPath:(id)arg1 error:(id *)arg2;
+ (id)_trashPath;
+ (id)_trashPathForPath:(id)arg1;
+ (void)startBackgroundTrashCleanupTask;

@end

