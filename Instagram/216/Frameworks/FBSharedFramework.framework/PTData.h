//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_data;

@interface PTData : NSObject
{
    NSObject<OS_dispatch_data> *dispatchData_;
    void *data_;
    unsigned long long length_;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long length; // @synthesize length=length_;
@property(readonly) void *data; // @synthesize data=data_;
@property(readonly) NSObject<OS_dispatch_data> *dispatchData; // @synthesize dispatchData=dispatchData_;
- (id)description;
- (void)dealloc;
- (id)initWithMappedDispatchData:(id)arg1 data:(void *)arg2 length:(unsigned long long)arg3;

@end

