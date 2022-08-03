const std = @import("std");
const c = @cImport({
    @cInclude("wrapper.h");
});

pub fn main() anyerror!void {
    var cxxc = c.init();
    defer c.deinit(@ptrCast([*c]c.CxxC, &cxxc));

    var res = c.add_cxx(@ptrCast([*c]c.CxxC, &cxxc), 1 , 2);
    
    var i: i32 = 0;
    while (i < res) : (i += 1) {
        std.log.info("bla", .{});
    }
}

test "basic test" {
    try std.testing.expectEqual(10, 3 + 7);
}
