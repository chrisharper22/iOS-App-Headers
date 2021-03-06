//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSData, NSString;

@interface IGMediaUploadURLRequestBody : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSData *_uploadData;
    NSString *_tailingFile_path;
    long long _tailingFile_fileBufferSize;
    long long _tailingFile_memoryBufferSize;
}

+ (id)uploadData:(id)arg1;
+ (id)tailingFileWithPath:(id)arg1 fileBufferSize:(long long)arg2 memoryBufferSize:(long long)arg3;
- (void).cxx_destruct;
- (void)matchUploadData:(CDUnknownBlockType)arg1 tailingFile:(CDUnknownBlockType)arg2;

@end

