//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGLKContext, IGGLKNode, IGGLKQueue, IGGLKSession, IGGLKStencilRenderbuffer, IGGLKTexture2D, IGGLKTextureRenderer, IGGLKView, NSArray, NSMutableArray, UIColor;
@protocol IGGLKCanvasDisplayDelegate, MTLDepthStencilState;

@interface IGGLKCanvas : NSObject
{
    double _red;
    double _green;
    double _blue;
    IGGLKNode *_rootNode;
    IGGLKContext *_context;
    IGGLKTextureRenderer *_textureRenderer;
    IGGLKQueue *_renderQueue;
    IGGLKSession *_session;
    shared_ptr_f1960820 _framebufferIGL;
    NSMutableArray *_filterChainTextures;
    IGGLKStencilRenderbuffer *_stencilBuffer;
    IGGLKTexture2D *_stencilTexture;
    id <MTLDepthStencilState> _depthStencilStateKeep;
    id <MTLDepthStencilState> _depthStencilStateIncrement;
    id <MTLDepthStencilState> _depthStencilStateReplace;
    struct shared_ptr<igl::IDepthStencilState> _depthStencilStateKeepIGL;
    struct shared_ptr<igl::IDepthStencilState> _depthStencilStateIncrementIGL;
    struct shared_ptr<igl::IDepthStencilState> _depthStencilStateReplaceIGL;
    NSMutableArray *_heaps;
    unsigned long long _heapIndex;
    unsigned int _framebuffer;
    UIColor *_backgroundColor;
    IGGLKView *_view;
    double _contentsScale;
    id <IGGLKCanvasDisplayDelegate> _displayDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int framebuffer; // @synthesize framebuffer=_framebuffer;
@property(nonatomic) __weak id <IGGLKCanvasDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
@property(nonatomic) double contentsScale; // @synthesize contentsScale=_contentsScale;
@property(nonatomic) __weak IGGLKView *view; // @synthesize view=_view;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)_attachTexture:(id)arg1;
- (void)_attachColorRenderbuffer:(id)arg1;
- (void)_attachRenderTargetWithState:(id)arg1;
- (shared_ptr_b95409fc)_nextRenderTargetWithStateIGL:(id)arg1;
- (shared_ptr_b95409fc)_createTextureFromNativeDrawableIGL:(id)arg1;
- (id)_nextRenderTargetWithState:(id)arg1;
- (id)_nextFilterChainTextureForState:(id)arg1;
- (id)_currentFilterChainTextureForState:(id)arg1;
- (void)_removeAllFilterChainTextures;
- (void)_removeFilterChainTexture;
- (void)_addFilterChainTextureWithState:(id)arg1;
- (void)_renderTexture:(id)arg1 inContext:(id)arg2 flipped:(_Bool)arg3;
- (void)_renderBackgroundForNode:(id)arg1 withState:(id)arg2;
- (void)_renderNode:(id)arg1 withState:(id)arg2;
- (void)_renderWithState:(id)arg1;
- (void)renderWithDevice:(id)arg1 toTexture:(id)arg2;
- (void)renderWithDevice:(id)arg1 toIGLTexture:(shared_ptr_b95409fc)arg2 isPresentable:(_Bool)arg3;
- (void)renderWithDevice:(id)arg1 toLayer:(id)arg2;
- (void)renderToTexture:(id)arg1;
- (void)renderToColorRenderbuffer:(id)arg1;
- (void)node:(id)arg1 didRemoveChild:(id)arg2;
- (void)node:(id)arg1 didAddChild:(id)arg2;
@property(nonatomic) struct CGSize size;
- (void)setNeedsDisplay;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGPoint)convertTranslation:(struct CGPoint)arg1 withEndPoint:(struct CGPoint)arg2 toNode:(id)arg3;
- (struct CGPoint)convertTranslation:(struct CGPoint)arg1 withEndPoint:(struct CGPoint)arg2 fromNode:(id)arg3;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2 toNode:(id)arg3;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromNode:(id)arg2 toView:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2 toNode:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromNode:(id)arg2 toView:(id)arg3;
- (void)sendChildToBack:(id)arg1;
- (void)bringChildToFront:(id)arg1;
- (void)insertChild:(id)arg1 belowSibling:(id)arg2;
- (void)insertChild:(id)arg1 aboveSibling:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(long long)arg2;
- (void)addChild:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

@end

