//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGLKQueue;

@interface IGGLKRenderbuffer : NSObject
{
    unsigned int _handle;
    IGGLKQueue *_renderQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int handle; // @synthesize handle=_handle;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

@end
