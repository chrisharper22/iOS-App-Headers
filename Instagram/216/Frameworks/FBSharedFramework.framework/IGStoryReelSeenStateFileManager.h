//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString;

@interface IGStoryReelSeenStateFileManager : NSObject
{
    NSString *_directory;
    NSFileManager *_fileManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, copy, nonatomic) NSString *directory; // @synthesize directory=_directory;
- (void)deleteSeenStateMetadata:(id)arg1;
- (_Bool)cacheSeenStateMetadata:(id)arg1;
- (id)_allSeenStatesFiles;
- (id)allSeenStateMetadatas;
- (id)initWithUserPK:(id)arg1 fileManager:(id)arg2;
- (id)initWithUserPK:(id)arg1;

@end

