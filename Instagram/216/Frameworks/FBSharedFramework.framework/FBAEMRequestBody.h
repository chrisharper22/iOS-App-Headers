//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSMutableDictionary;

@interface FBAEMRequestBody : NSObject
{
    NSMutableData *_data;
    NSMutableDictionary *_json;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *json; // @synthesize json=_json;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (id)compressedData;
- (void)_appendWithKey:(id)arg1 filename:(id)arg2 contentType:(id)arg3 contentBlock:(CDUnknownBlockType)arg4;
- (void)appendWithKey:(id)arg1 formValue:(id)arg2;
- (void)appendUTF8:(id)arg1;
- (id)init;

@end

