//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUpload-Protocol.h>

@class NSString;

@interface IGStreamUpload : NSObject <IGUpload>
{
    CDUnknownBlockType _inputStreamGenerator;
    NSString *_mimeType;
    unsigned long long _length;
}

+ (id)uploadForFileAtURL:(id)arg1 withMimeType:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
- (id)filename;
- (id)generateInputStream;
- (id)initWithMimeType:(id)arg1 length:(unsigned long long)arg2 inputStreamGenerator:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
